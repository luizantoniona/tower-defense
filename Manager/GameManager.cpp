#include "GameManager.h"

#include <Screens/ScreenType.h>
#include <Screens/GameScreen.h>
#include <Screens/MainMenuScreen.h>

using namespace Screens;

BEGIN_MANAGER_NAMESPACE

GameManager::GameManager() : 
_window(sf::VideoMode(800, 600), "Tower Defense"),
_screenManager()
{
    _screenManager.addScreen(ScreenType::MainMenuScreen, std::make_shared<MainMenuScreen>());
    _screenManager.addScreen(ScreenType::GameScreen, std::make_shared<GameScreen>());

    _screenManager.setScreen(ScreenType::MainMenuScreen);
}

void GameManager::run() {
    while (_window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void GameManager::processEvents() {
    sf::Event event;
    while (_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed){
            _window.close();
        }
        _screenManager.handleInput(event);
    }
}

void GameManager::update() {
    _screenManager.update();
}

void GameManager::render() {
    _window.clear();
    _screenManager.render(_window);
    _window.display();
}

END_MANAGER_NAMESPACE