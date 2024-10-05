#pragma once

#include <SFML/Graphics.hpp>

#include <GUI/GUIGlobals.h>

BEGIN_GUI_NAMESPACE

class Button {
public:
    Button();

    void render( sf::RenderWindow& window );
    bool isClicked( const sf::Vector2i& mousePos );

private:
    sf::RectangleShape _shape;
};

END_GUI_NAMESPACE
