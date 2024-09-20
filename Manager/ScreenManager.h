#pragma once

#include <unordered_map>
#include <memory>

#include <SFML/Graphics.hpp>

#include <Manager/ManagerGlobals.h>
#include <Screens/ScreenType.h>
#include <Screens/Screen.h>

using Screens::ScreenType;
using Screens::Screen;

BEGIN_MANAGER_NAMESPACE

class ScreenManager {
public:
    ScreenManager();

    void setScreen(const ScreenType& screenType);
    void addScreen(const ScreenType& screenType, std::shared_ptr<Screen> screen);
    void handleInput(const sf::Event& event);
    void update();
    void render(sf::RenderWindow& window);

private:
    std::unordered_map<ScreenType, std::shared_ptr<Screen>> _screens;
    std::shared_ptr<Screen> _activeScreen;
};

END_MANAGER_NAMESPACE
