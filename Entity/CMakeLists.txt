set(SOURCES
Enemy/Enemy.cpp
Enemy/EnemyFactory.cpp
Map/Cell/Cell.cpp
Map/Map.cpp
Tower/Tower.cpp
Tower/TowerFactory.cpp
Shape.cpp
)

set(HEADERS
EntityGlobal.h
Enemy/Enemy.h
Enemy/EnemyFactory.h
Enemy/EnemyType.h
Map/Cell/Cell.h
Map/Cell/CellType.h
Map/Map.h
Map/MapType.h
Tower/Tower.h
Tower/TowerType.h
Tower/TowerFactory.h
Shape.h
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})