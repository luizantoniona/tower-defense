set(SOURCES
GameScreen.cpp
MainMenuScreen.cpp
Screen.cpp
)

set(HEADERS
GameScreen.h
MainMenuScreen.h
Screen_Globals.h
Screen.h
ScreenType.h
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})