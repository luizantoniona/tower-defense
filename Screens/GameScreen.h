#pragma once

#include <memory>

#include <SFML/Graphics.hpp>

#include <Entity/Map/Map.h>
#include <GUI/MainPanel.h>
#include <Screens/Screen.h>
#include <Screens/ScreenGlobals.h>

using Entity::Map;
using GUI::MainPanel;
using Screens::Screen;

BEGIN_SCREEN_NAMESPACE

class GameScreen : public Screen {
public:
    GameScreen( int windowWidth, int windowHeight );

    void handleInput( const sf::Event& event ) override;
    void update() override;
    void render( sf::RenderWindow& window ) override;

private:
    std::unique_ptr<MainPanel> _mainPanel;
    std::unique_ptr<Map> _map;
    // Aqui, podemos adicionar membros como o mapa, torres, inimigos, etc.
    // Exemplo simples de um objeto de jogo
    // Outros elementos do jogo (inimigos, torres, etc.)
};

END_SCREEN_NAMESPACE
