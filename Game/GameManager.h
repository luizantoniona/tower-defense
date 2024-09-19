#pragma once

#include <SFML/Graphics.hpp>

#include <Game/Game_Globals.h>

BEGIN_GAME_NAMESPACE

class GameManager {
public:
    GameManager();
    void run();

private:
    sf::RenderWindow _window;
    // ScreenManager screenManager;
    void processEvents();
    void update();
    void render();
};

END_GAME_NAMESPACE
