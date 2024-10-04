set(SOURCES
Enemy/Enemy.cpp
GUI/MainPanel.cpp
Map/Cell/Cell.cpp
Map/Map.cpp
Tower/Tower.cpp
)

set(HEADERS
EntityGlobal.h
Enemy/Enemy.h
Enemy/EnemyType.h
GUI/MainPanel.h
Map/Cell/Cell.h
Map/Cell/CellType.h
Map/Map.h
Map/MapType.h
Tower/Tower.h
Tower/TowerType.h
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})