#include "GameManager.h"

#include <Screens/GameScreen.h>
#include <Screens/MainMenuScreen.h>
#include <Screens/ScreenType.h>

using Screens::GameScreen;
using Screens::MainMenuScreen;
using Screens::ScreenType;

namespace {
constexpr const char* DISPLAY_NAME = "Geometric Defense";
constexpr const int SCREEN_WIDTH = 1000;
constexpr const int SCREEN_HEIGHT = 800;
} // namespace

BEGIN_MANAGER_NAMESPACE

GameManager::GameManager()
    : _window( sf::VideoMode( SCREEN_WIDTH, SCREEN_HEIGHT ), DISPLAY_NAME ),
      _screenManager() {
    _view.reset(
        sf::FloatRect( 0, 0, float( SCREEN_WIDTH ), float( SCREEN_HEIGHT ) ) );
    _window.setView( _view );

    _screenManager.addScreen( ScreenType::MainMenuScreen,
                              std::make_shared<MainMenuScreen>() );

    _screenManager.addScreen(
        ScreenType::GameScreen,
        std::make_shared<GameScreen>( SCREEN_HEIGHT, SCREEN_WIDTH ) );

    _screenManager.setScreen( ScreenType::GameScreen );
}

void GameManager::run() {
    adjustView();

    while ( _window.isOpen() ) {
        processEvents();
        update();
        render();
    }
}

void GameManager::processEvents() {
    sf::Event event;
    while ( _window.pollEvent( event ) ) {
        if ( event.type == sf::Event::Closed ) {
            _window.close();
        }
        _screenManager.handleInput( event );
    }
}

void GameManager::update() {
    _screenManager.update();
}

void GameManager::render() {
    _window.clear();
    _screenManager.render( _window );
    _window.display();
}

void GameManager::adjustView() {
    _view.setCenter( float( SCREEN_WIDTH ) / 2, float( SCREEN_HEIGHT ) / 2 );
    _window.setView( _view );
}

END_MANAGER_NAMESPACE
