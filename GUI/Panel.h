#pragma once

#include <SFML/Graphics.hpp>

#include <GUI/GUIGlobals.h>

BEGIN_GUI_NAMESPACE

class Panel {
public:
    Panel( int panelWidth, int panelHeight, int panelX, int panelY, sf::Color color );

    void setSize( sf::Vector2f size );
    void setPosition( sf::Vector2f position );
    void setFillColor( sf::Color color );

    virtual void render( sf::RenderWindow& window ) = 0;
    virtual void handleInput( const sf::Event& event ) = 0;

protected:
    int _panelWidth;
    int _panelHeight;
    int _panelX;
    int _panelY;
    sf::RectangleShape _panel;
};

END_GUI_NAMESPACE
