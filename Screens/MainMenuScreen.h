#pragma once

#include <vector>

#include <SFML/Graphics.hpp>

#include <Screens/Screen.h>
#include <Screens/ScreenGlobals.h>

using Screens::Screen;

BEGIN_SCREEN_NAMESPACE

class MainMenuScreen : public Screen {
public:
    MainMenuScreen();

    void handleInput( const sf::Event& event ) override;
    void update() override;
    void render( sf::RenderWindow& window ) override;

private:
    void initMenu();
    bool isMouseOverOption( const sf::Text& option,
                            const sf::Vector2f& mousePos );

    sf::Font _font;
    sf::Text _title;
    std::vector<sf::Text> _menuOptions;
    int _selectedOption;
};

END_SCREEN_NAMESPACE
