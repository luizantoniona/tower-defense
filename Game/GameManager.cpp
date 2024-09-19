#include "GameManager.h"

BEGIN_GAME_NAMESPACE

GameManager::GameManager()
    : _window(sf::VideoMode(800, 600), "Tower Defense")
{
    // screenManager.setScreen("MainMenu");
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
        if (event.type == sf::Event::Closed)
            _window.close();

        // // Passa os eventos para a tela atual
        // screenManager.handleInput(event);
    }
}

void GameManager::update() {
    // // Atualiza a tela atual
    // screenManager.update();
}

void GameManager::render() {
    _window.clear();
    // // Desenha a tela atual
    // screenManager.render(window);
    // window.display();
}

END_GAME_NAMESPACE