#include "MainPanel.h"

#include <SFML/Graphics/Color.hpp>

BEGIN_GUI_NAMESPACE

MainPanel::MainPanel( int panelWidth, int panelHeight, int panelX, int panelY )
    : Panel( panelWidth, panelHeight, panelX, panelY, sf::Color::White ) {
}

void MainPanel::render( sf::RenderWindow& window ) {
    // this->render( window );
}

void MainPanel::handleInput( const sf::Event& event ) {
}

END_GUI_NAMESPACE
