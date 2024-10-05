#pragma once

#include <SFML/Graphics.hpp>

#include <Screens/ScreenGlobals.h>
#include <Screens/ScreenType.h>

BEGIN_SCREEN_NAMESPACE

class Screen {
public:
    Screen( int windowWidth, int windowHeight );
    virtual ~Screen() = default;

    virtual void handleInput( const sf::Event& event ) = 0;
    virtual void update() = 0;
    virtual void render( sf::RenderWindow& window ) = 0;

protected:
    int _windowWidth;
    int _windowHeight;
};

END_SCREEN_NAMESPACE
