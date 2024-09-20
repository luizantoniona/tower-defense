#include "MainMenuScreen.h"

#include <Manager/AssetManager.h>

using namespace Manager;

BEGIN_SCREEN_NAMESPACE

MainMenuScreen::MainMenuScreen() : _selectedOption(-1) {

    _font = AssetManager::instance().font(FontType::Arial);

    _title.setFont(_font);
    _title.setString("Geometric Defense");
    _title.setCharacterSize(50);
    _title.setFillColor(sf::Color::White);
    _title.setPosition(200, 100);

    initMenu();
}

void MainMenuScreen::handleInput(const sf::Event& event){
    // Verifica eventos do mouse
    if (event.type == sf::Event::MouseMoved) {
        sf::Vector2f mousePos(event.mouseMove.x, event.mouseMove.y);
        _selectedOption = -1;

        for (size_t i = 0; i < _menuOptions.size(); ++i) {
            if (isMouseOverOption(_menuOptions[i], mousePos)) {
                _selectedOption = i; // Atualiza a opção selecionada
                break;
            }
        }
    }

    if (event.type == sf::Event::MouseButtonPressed) {
        if (event.mouseButton.button == sf::Mouse::Left && _selectedOption != -1) {
            // Verifica qual opção foi selecionada
            if (_selectedOption == 0) {
                // Iniciar jogo
            } else if (_selectedOption == 4) {
                // Sair do jogo
            }
        }
    }
}

void MainMenuScreen::update() {
    for (size_t i = 0; i < _menuOptions.size(); ++i) {
        if (i == _selectedOption) {
            _menuOptions[i].setFillColor(sf::Color::Red);
        } else {
            _menuOptions[i].setFillColor(sf::Color::White);
        }
    }
}

void MainMenuScreen::render(sf::RenderWindow& window) {
    window.draw(_title);

    for (const auto& option : _menuOptions) {
        window.draw(option);
    }
}

void MainMenuScreen::initMenu() {
    std::vector<std::string> options = {"Start Game", "Map Selection", "Upgrades", "Settings", "Exit"};

    for (size_t i = 0; i < options.size(); ++i) {
        sf::Text option;
        option.setFont(_font);
        option.setString(options[i]);
        option.setCharacterSize(30);
        option.setFillColor(sf::Color::White); // Cor inicial
        option.setPosition(250, 200 + i * 50); // Posiciona as opções no menu
        _menuOptions.push_back(option);
    }
}

bool MainMenuScreen::isMouseOverOption(const sf::Text& option, const sf::Vector2f& mousePos) {
    return option.getGlobalBounds().contains(mousePos);
}

END_SCREEN_NAMESPACE