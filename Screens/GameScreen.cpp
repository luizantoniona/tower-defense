#include "GameScreen.h"

BEGIN_SCREEN_NAMESPACE

GameScreen::GameScreen() {
}

void GameScreen::handleInput(const sf::Event& event) {
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Escape) {

        }
    }
}

void GameScreen::update() {
}

void GameScreen::render(sf::RenderWindow& window) {
}

END_SCREEN_NAMESPACE
