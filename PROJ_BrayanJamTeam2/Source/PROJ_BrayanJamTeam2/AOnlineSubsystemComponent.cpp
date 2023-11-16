// Fill out your copyright notice in the Description page of Project Settings.


#include "AOnlineSubsystemComponent.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "GameFramework/Character.h"

// Sets default values for this component's properties
UAOnlineSubsystemComponent::UAOnlineSubsystemComponent() : 
	CreateSessionCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreateSessionComplete)),
	FindSessionsCompleteDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnFindSessionComplete)),
	JoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnJoinSessionComplete))


{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
	if(OnlineSubsystem)
	{
		OnlineSessionInterface = OnlineSubsystem->GetSessionInterface();

		

		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				10.f,
				FColor::Purple,
				FString::Printf(TEXT("Found Subsystem: %s"), *OnlineSubsystem->GetSubsystemName().ToString())
			);
		}
	}
}


// Called when the game starts
void UAOnlineSubsystemComponent::BeginPlay()
{
	Super::BeginPlay();

	// GetReference to Parent Actor
	ParentRef = static_cast<ACharacter*>(this->GetOwner());
}

void UAOnlineSubsystemComponent::CreateGameSession()
{
	if (!OnlineSessionInterface.IsValid())
	{
		return;
	}

	auto ExistingSession = OnlineSessionInterface->GetNamedSession(NAME_GameSession);
	if (ExistingSession != nullptr)
	{
		OnlineSessionInterface->DestroySession(NAME_GameSession);
	}

	//Add the Dalegate on DelegateList
	OnlineSessionInterface->AddOnCreateSessionCompleteDelegate_Handle(CreateSessionCompleteDelegate);

	//Create Session
	TSharedPtr<FOnlineSessionSettings> SessionSettings = MakeShareable(new FOnlineSessionSettings());
	
	SessionSettings->bIsLANMatch = false;
	SessionSettings->NumPublicConnections = 4;
	SessionSettings->bAllowJoinInProgress = true;
	SessionSettings->bAllowJoinViaPresence = true;
	SessionSettings->bShouldAdvertise = true;
	SessionSettings->bUsesPresence = true;
	SessionSettings->bUseLobbiesIfAvailable = true;
	SessionSettings->Set(FName("MatchType"), FString("FreeForAll"), EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	OnlineSessionInterface->CreateSession(*LocalPlayer->GetPreferredUniqueNetId(), NAME_GameSession, *SessionSettings);
}

void UAOnlineSubsystemComponent::JoinGameSession()
{
	if(!OnlineSessionInterface)
	{
		return;
	}

	OnlineSessionInterface->AddOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegate);

	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	SessionSearch->MaxSearchResults = 10000;
	SessionSearch->bIsLanQuery = false;
	SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);

	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	OnlineSessionInterface->FindSessions(*LocalPlayer->GetPreferredUniqueNetId(), SessionSearch.ToSharedRef());
}

void UAOnlineSubsystemComponent::OnCreateSessionComplete(FName SessionName, bool bWasSuccess)
{
	if (bWasSuccess)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				15.f,
				FColor::Blue,
				FString::Printf(TEXT("Created Session %s"),*SessionName.ToString())
			);
		}

		UWorld* World = GetWorld();
		if(World)
		{
			World->ServerTravel(FString("/Game/_MainFiles/Main_Level.Main_Level?Listen"));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			15.f,
			FColor::Blue,
			FString::Printf(TEXT("Created Session Failed"))
		);
	}
}

void UAOnlineSubsystemComponent::OnFindSessionComplete(bool bWasSuccessful)
{
	if (!OnlineSessionInterface)
	{
		return;
	}

	
	for(auto Result : SessionSearch->SearchResults)
	{
		FString Id = Result.GetSessionIdStr();
		FString User = Result.Session.OwningUserName;

		FString MatchType;
		Result.Session.SessionSettings.Get(FName("MatchType"), MatchType);

		//Debug
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				15.f,
				FColor::Orange,
				FString::Printf(TEXT("Id: %s, User: %s"), *Id, *User)
			);
		}

		if(MatchType == FString("FreeForAll"))
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(
					-1,
					15.f,
					FColor::Orange,
					FString::Printf(TEXT("Joining MatchType %s"), *MatchType)
				);
			}

			OnlineSessionInterface->AddOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegate);

			const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
			OnlineSessionInterface->JoinSession(*LocalPlayer->GetPreferredUniqueNetId(), NAME_GameSession, Result);
		}
	}
}

void UAOnlineSubsystemComponent::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	if (!OnlineSessionInterface.IsValid())
	{
		return;
	}

	FString Address;

	if(OnlineSessionInterface->GetResolvedConnectString(NAME_GameSession, Address))
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				15.f,
				FColor::Cyan,
				FString::Printf(TEXT("Connect to: %s"), *Address)
			);
			
		}

		APlayerController* PlayerController = ParentRef->GetGameInstance()->GetFirstLocalPlayerController();
		if(PlayerController)
		{
			PlayerController->ClientTravel(Address, TRAVEL_Absolute);
		}
	}
}


// Called every frame
void UAOnlineSubsystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

