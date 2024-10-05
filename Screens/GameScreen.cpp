#include "GameScreen.h"

#include <memory>

#include <Entity/Map/MapType.h>

BEGIN_SCREEN_NAMESPACE

GameScreen::GameScreen( int windowWidth, int windowHeight )
    : Screen( windowWidth, windowHeight ), _map( nullptr ), _mainPanel( nullptr ) {

    int mapWidth = 3 * ( windowWidth / 4 );
    int mapHeight = windowHeight;
    _map = std::make_unique<Map>( MapType::Teste, mapWidth, mapHeight, _windowWidth, _windowHeight );

    int panelWidth = ( windowWidth / 4 );
    int panelHeight = windowHeight;
    _mainPanel = std::make_unique<MainPanel>( panelWidth, panelHeight, _windowWidth, _windowHeight );
}

void GameScreen::handleInput( const sf::Event& event ) {
    if ( event.type == sf::Event::KeyPressed ) {
        if ( event.key.code == sf::Keyboard::Escape ) {
        }
    }
}

void GameScreen::update() {
}

void GameScreen::render( sf::RenderWindow& window ) {
    _map->render( window );
    _mainPanel->render( window );
}

END_SCREEN_NAMESPACE
