#include "ScreenManager.h"

BEGIN_MANAGER_NAMESPACE

ScreenManager::ScreenManager() : _activeScreen( nullptr ) {
}

void ScreenManager::setScreen( const ScreenType& screenType ) {
    _activeScreen = _screens.at( screenType );
}

void ScreenManager::addScreen( const ScreenType& screenType, std::shared_ptr<Screen> screen ) {
    _screens[ screenType ] = screen;
}

void ScreenManager::handleInput( const sf::Event& event ) {
    if ( _activeScreen ) {
        _activeScreen->handleInput( event );
    }
}

void ScreenManager::update() {
    if ( _activeScreen ) {
        _activeScreen->update();
    }
}

void ScreenManager::render( sf::RenderWindow& window ) {
    if ( _activeScreen ) {
        _activeScreen->render( window );
    }
}

END_MANAGER_NAMESPACE
