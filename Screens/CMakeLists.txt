set(SOURCES
    ScreenManager.cpp
)

set(HEADERS
    Screen_Globals.h
    Screen.h
    ScreenManager.h
    ScreenType.h
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${HEADERS})