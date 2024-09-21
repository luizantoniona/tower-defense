#pragma once

#include <SFML/Graphics.hpp>

#include <Manager/ManagerGlobals.h>
#include <Manager/ScreenManager.h>

using Manager::ScreenManager;

BEGIN_MANAGER_NAMESPACE

class GameManager {
public:
    GameManager();
    void run();

private:
    sf::RenderWindow _window;
    sf::View _view;
    ScreenManager _screenManager;
    void processEvents();
    void update();
    void render();
    void adjustView();
};

END_MANAGER_NAMESPACE
