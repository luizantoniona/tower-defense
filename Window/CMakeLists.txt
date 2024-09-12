set(SOURCES
    Window.cpp
)

set(HEADERS
    Window.h
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${HEADERS})