#pragma once

#include <SFML/Graphics.hpp>

#include <Screens/Screen_Globals.h>
#include <Screens/Screen.h>

using namespace Screens;

BEGIN_SCREEN_NAMESPACE

class GameScreen : public Screen {
public:
    GameScreen();

    void handleInput(const sf::Event& event) override;
    void update() override;
    void render(sf::RenderWindow& window) override;

private:
    // Aqui, podemos adicionar membros como o mapa, torres, inimigos, etc.
    // Exemplo simples de um objeto de jogo
    // Outros elementos do jogo (inimigos, torres, etc.)
};

END_SCREEN_NAMESPACE
