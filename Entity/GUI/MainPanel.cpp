#include "MainPanel.h"

#include <SFML/Graphics/Color.hpp>
#include <SFML/System/Vector2.hpp>

BEGIN_ENTITY_NAMESPACE

MainPanel::MainPanel( int panelHeight, int panelWidth ) : _panel() {

    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();

    _panel.setSize( sf::Vector2f( panelWidth, panelHeight ) );
    _panel.setPosition( sf::Vector2f( 3 * ( float( desktopMode.width ) / 4 ), 0 ) );
    _panel.setFillColor( sf::Color::White );
}

void MainPanel::render( sf::RenderWindow& window ) {
    window.draw( _panel );
}

END_ENTITY_NAMESPACE
