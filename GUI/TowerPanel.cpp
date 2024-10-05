#include "TowerPanel.h"

#include <SFML/Graphics/Color.hpp>

BEGIN_GUI_NAMESPACE

TowerPanel::TowerPanel( int panelWidth, int panelHeight, int panelX, int panelY )
    : Panel( panelWidth, panelHeight, panelX, panelY, sf::Color::White ) {
}

void TowerPanel::render( sf::RenderWindow& window ) {
    window.draw( _panel );
}

void TowerPanel::handleInput( const sf::Event& event ) {
}

END_GUI_NAMESPACE