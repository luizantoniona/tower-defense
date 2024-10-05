#include "InfoPanel.h"

#include <SFML/Graphics/Color.hpp>

BEGIN_GUI_NAMESPACE

InfoPanel::InfoPanel( int panelWidth, int panelHeight, int panelX, int panelY )
    : Panel( panelWidth, panelHeight, panelX, panelY, sf::Color::White ) {
}

void InfoPanel::render( sf::RenderWindow& window ) {
    this->render( window );
}

void InfoPanel::handleInput( const sf::Event& event ) {
}

END_GUI_NAMESPACE