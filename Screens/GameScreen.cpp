#include "GameScreen.h"

#include <Entity/Map/MapType.h>

using Entity::MapType;

BEGIN_SCREEN_NAMESPACE

GameScreen::GameScreen( int windowHeight, int windowWidth ) : _map( MapType::Teste, windowHeight, windowWidth ) {
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
    _map.render( window );
}

END_SCREEN_NAMESPACE
