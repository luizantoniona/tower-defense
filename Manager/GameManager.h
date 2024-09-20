#pragma once

#include <SFML/Graphics.hpp>

#include <Manager/ManagerGlobals.h>
#include <Manager/ScreenManager.h>

using namespace Manager;

BEGIN_MANAGER_NAMESPACE

class GameManager {
public:
    GameManager();
    void run();

private:
    sf::RenderWindow _window;
    ScreenManager _screenManager;
    void processEvents();
    void update();
    void render();
};

END_MANAGER_NAMESPACE
