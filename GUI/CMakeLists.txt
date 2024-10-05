set(SOURCES
InfoPanel.cpp
MainPanel.cpp
Panel.cpp
TowerPanel.cpp
)

set(HEADERS
GUIGlobals.h
InfoPanel.h
MainPanel.h
Panel.h
TowerPanel.h
)

target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})