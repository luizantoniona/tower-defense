#pragma once

#include <SFML/Graphics.hpp>

#include <Screens/ScreenGlobals.h>

BEGIN_SCREEN_NAMESPACE

class Screen {
public:
    virtual ~Screen() = default;

    virtual void handleInput( const sf::Event& event ) = 0;
    virtual void update() = 0;
    virtual void render( sf::RenderWindow& window ) = 0;
};

END_SCREEN_NAMESPACE
