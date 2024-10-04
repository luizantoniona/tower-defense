#pragma once

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include <Entity/EntityGlobals.h>

BEGIN_ENTITY_NAMESPACE

class MainPanel {
public:
    MainPanel( int panelHeight, int panelWidth );

    void render( sf::RenderWindow& window );

private:
    sf::RectangleShape _panel;
};

END_ENTITY_NAMESPACE
