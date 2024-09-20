set(SOURCES
AssetManager.cpp
GameManager.cpp
ScreenManager.cpp
)

set(HEADERS
ManagerGlobals.h
AssetManager.h
GameManager.h
ScreenManager.h
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})