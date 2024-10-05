#include "Panel.h"

#include <SFML/Graphics/Color.hpp>
#include <SFML/System/Vector2.hpp>

BEGIN_GUI_NAMESPACE

Panel::Panel( int panelWidth, int panelHeight, int panelX, int panelY, sf::Color color )
    : _panel(), _panelWidth( panelWidth ), _panelHeight( panelHeight ), _panelX( panelX ), _panelY( panelY ) {

    setSize( sf::Vector2f( panelWidth, panelHeight ) );
    setPosition( sf::Vector2f( panelX, panelY ) );
    setFillColor( color );
}

void Panel::setSize( sf::Vector2f size ) {
    _panel.setSize( size );
}

void Panel::setPosition( sf::Vector2f position ) {
    _panel.setPosition( position );
}

void Panel::setFillColor( sf::Color color ) {
    _panel.setFillColor( color );
}

END_GUI_NAMESPACE
