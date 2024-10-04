#include "GameScreen.h"

#include <memory>

#include <Entity/Map/MapType.h>

using Entity::MapType;

BEGIN_SCREEN_NAMESPACE

GameScreen::GameScreen( int windowHeight, int windowWidth ) : _map( nullptr ), _mainPanel( nullptr ) {

    int mapHeight = windowHeight;
    int mapWidth = 3 * ( windowWidth / 4 );
    _map = std::make_unique<Map>( MapType::Teste, mapHeight, mapWidth );

    int panelHeight = windowHeight;
    int panelWidth = ( windowWidth / 4 );
    _mainPanel = std::make_unique<MainPanel>( panelHeight, panelWidth );
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
    _mainPanel->render( window );
    _map->render( window );
}

END_SCREEN_NAMESPACE
