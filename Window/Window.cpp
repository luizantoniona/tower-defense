#include "Window.h"

#include <SFML/Graphics.hpp>

Window& Window::instance()
{
    static Window instance;
    return instance;
}

Window::Window()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
}