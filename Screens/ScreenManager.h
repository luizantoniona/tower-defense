#pragma once

#include <unordered_map>
#include <memory>

#include <SFML/Graphics.hpp>

#include <Screens/Screen_Globals.h>
#include <Screens/ScreenType.h>
#include <Screens/Screen.h>

using Screens::ScreenType;
using Screens::Screen;

class ScreenManager {
public:
    ScreenManager();

    // Define a tela ativa
    void setScreen(const ScreenType& screenType);

    // Adiciona uma nova tela
    void addScreen(const ScreenType& screenType, std::shared_ptr<Screen> screen);

    // Processa as entradas da tela ativa
    void handleInput(const sf::Event& event);

    // Atualiza a tela ativa
    void update();

    // Renderiza a tela ativa
    void render(sf::RenderWindow& window);

private:
    std::unordered_map<ScreenType, std::shared_ptr<Screen>> _screens;
    std::shared_ptr<Screen> _activeScreen;
};
