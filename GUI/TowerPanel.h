#pragma once

#include <SFML/Graphics.hpp>

#include <GUI/GUIGlobals.h>
#include <GUI/Panel.h>

BEGIN_GUI_NAMESPACE

class TowerPanel : Panel {
public:
    TowerPanel( int panelWidth, int panelHeight, int panelX, int panelY );

    void render( sf::RenderWindow& window );
    void handleInput( const sf::Event& event );

private:
};

END_GUI_NAMESPACE
