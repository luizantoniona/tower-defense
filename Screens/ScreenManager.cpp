#include "ScreenManager.h"
#include <iostream>

ScreenManager::ScreenManager() : _activeScreen(nullptr) {}

void ScreenManager::setScreen(const ScreenType& screenType) {
    auto it = _screens.find(screenType);
    if (it != _screens.end()) {
        _activeScreen = it->second; // Define a tela ativa

    } else {
        std::cout << "Screen not found: " << static_cast<int>(screenType) << std::endl;
    }
}

void ScreenManager::addScreen(const ScreenType& screenType, std::shared_ptr<Screen> screen) {
    // Adiciona uma nova tela ao mapa de telas
    _screens[screenType] = screen;
}

void ScreenManager::handleInput(const sf::Event& event) {
    if (_activeScreen) {
        _activeScreen->handleInput(event);
    }
}

void ScreenManager::update() {
    if (_activeScreen) {
        _activeScreen->update();
    }
}

void ScreenManager::render(sf::RenderWindow& window) {
    if (_activeScreen) {
        _activeScreen->render(window);
    }
}
