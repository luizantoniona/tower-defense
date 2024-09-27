set(SOURCES
Map/Cell/Cell.cpp
Map/Map.cpp
)

set(HEADERS
EntityGlobal.h
Map/Cell/Cell.h
Map/Cell/CellType.h
Map/Map.h
Map/MapType.h
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})