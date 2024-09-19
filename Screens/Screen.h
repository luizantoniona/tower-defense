#pragma once

#include <SFML/Graphics.hpp>

#include <Screens/Screen_Globals.h>

BEGIN_SCREEN_NAMESPACE

class Screen {
public:
    virtual ~Screen() = default;

    // Método para processar as entradas (eventos de teclado/mouse)
    virtual void handleInput(const sf::Event& event) = 0;

    // Método para atualizar a lógica da tela
    virtual void update() = 0;

    // Método para renderizar os elementos da tela
    virtual void render(sf::RenderWindow& window) = 0;
};

END_SCREEN_NAMESPACE
