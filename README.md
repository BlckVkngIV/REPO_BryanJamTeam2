# BryanJamEquipo1
Proyecto de Unreal Engine 5.2.1 de la BryanJam
### Requiere GIT LFS

# Changelog:
## 0.0.0 / EduardoCamarena
 - Creadas 2 carpetas, `PROJ_*` para los archivos del motor y `BUILD_*` para la version ejecutable del juego.
 - Creado el `.gitAttributes` y `.gitignore` para el uso de Git Large File Storage.
 ### Carpetas afectadas:
 * PROJ_*
 * BUILD_*

## 0.0.1 / MiguelRuiz
- Se crearon los eventos para que el jugador pueda realizar los movimeintos de agacharse, correr y deslizarse.
 - *BeginCrouching*
 - *EndCrouching*
 - *BeginSliding*
 - *EndSliding*
 - *BeginCameraTilt*
 - *EndCameraTilt*
- Se creo la Funcion ##ResolveMovementState , esta funcion analiza cada uno de los estados para volver al estado 'Base' en este caso es la funcion 'Can Stand'.
- Se creo la Funcion ##CanStand, esta funcion detecta si el jugador puede volver a su estado original ( esto modifica el tamaño / escala de la capsula del jugador).
- Se creo la Funcion ##CanSprint , esta funcion detecta si el jugador puede correr y si no esta cayendo el personaje.
- Se creo la Funcion ##CalculateFloorInfluence , esta funcion detecta si el terreno es apto para dezlizarse sobre el en base al grado de inclinacion que se tiene o en su defecto si  el jugador tiene velocidad con la funcion CanSprint.
- Se creo la Funcion ##OnMovementStateChange la cual detecta el estado del jugador y en base a eso regresa o modifica sus propiedades de interaccion con su entorno como la 
 fricción que este pueda tener en el suelo o la desaceleracion que se pueda tener en el mismo .
-Se creo la Funcion ##SetMovementState esta registra constantemente el estado en el que se encuentra el jugador mediante las variables PrevMovementState,MovementState y  
 NewMovementState, ademas de pasarle informacion al OnMovementStateChange para determinar que evento tendra que realizar a continuacion 
 -Estas Funciones y Eventos usan un Macro llamado ##SwitchMovementState, este Macro usa un Enumeration Blueprint para cada uno de los estados que tendra el jugador se obtengan mediante el contexto del macro y no se tengan que estar llamando todo el rato cada uno de ellos .
 ### Carpetas afectadas:
 * PROJ_*

## 0.0.2 / Eduardo Camarena
- Se creó la interfaz 'World Change' para el sistema de cambio de dimensiones.
 - BP_Circuit
 - BP_EduardoCharacterTesting
- Se crearon 2 Blueprint Actors para mitigar la no funcionalidad del sistema de movimiento.
 - BP_DashPad: Llama a 'LaunchCharacter' en dirección frontal, desactiva la fricción y aumenta la velocidad limite del jugador por un tiempo.
 - BP_LaunchPad: Llama a 'LaunchCharacter en dirección vertical.
- Se creó el gamemode 'GM_JamBlueprint', para uso final dentro del proyecto.
### Carpetas Afectadas:
 * _Developers/EduardoCamarena
 * _MainFiles

## 0.0.3 / Elias Treviño
- Se hicieron dos meshes para el nivel principal utilizando el sistema de cambio de dimensiones.

## 0.0.4 / Eduardo Camarena
- Se creó el nivel principal para la compilación de mecanicas.
- Se crearon funciones de respawn dentro del jugador.
- Se creó 'BP_KillTrigger' para colocar bajo el nivel y respawnear al jugador al caer.
   (KillVolumeZ y WorldSettings/KillZ no activaban la función de respawn)


# 0.0.5 / MiguelRuiz
-##*Parkour Movement*
 -*Apartir de un Actor Component*
 -###*Funciones Añadidas*
  -*WallRunUpdate*
  -*WallRunMovement*
  -*WallRunEnd*
  -*SupressWallRun*
  -*CamaraTick*
  -*CameraTilt*
  -*WallRunJump*
 -###*Macros Añadidos*
  -WallRunEndVectors
  -ValidWallRunVectors?
  -PlayerToWallVector

  
