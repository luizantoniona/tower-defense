set(SOURCES
    GameManager.cpp
)

set(HEADERS
    Game_Globals.h
    GameManager.h
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${HEADERS})