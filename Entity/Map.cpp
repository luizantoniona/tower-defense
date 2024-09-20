#include "Map.h"

#include <fstream>
#include <iostream>

Map::Map(int width, int height) : width(width), height(height) {
    grid.resize(height, std::vector<int>(width, 0));
}

void Map::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open map file: " << filename << std::endl;
        return;
    }

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            int value;
            file >> value;
            parseCell(value, x, y);
        }
    }
}

void Map::parseCell(int value, int x, int y) {
    if (value == 1) {
        path.push_back(sf::Vector2i(x, y));  // Marca célula como parte do caminho
    } else if (value == 2) {
        spawnPoint = sf::Vector2i(x, y);  // Define o ponto de spawn
    }
    grid[y][x] = value;  // Armazena o valor no grid
}

bool Map::isPositionValid(const sf::Vector2i& position) const {
    // Verifica se a célula está dentro do grid e se é uma posição válida (ex: não é caminho)
    if (position.x < 0 || position.y < 0 || position.x >= width || position.y >= height)
        return false;

    return grid[position.y][position.x] == 0;  // Retorna true se for uma célula vazia
}

sf::Vector2i Map::getSpawnPoint() const {
    return spawnPoint;
}

const std::vector<sf::Vector2i>& Map::getPath() const {
    return path;
}

void Map::render(sf::RenderWindow& window) {
    // Exemplo simples de renderização do mapa
    sf::RectangleShape cellShape(sf::Vector2f(32, 32));  // Tamanho de uma célula
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if (grid[y][x] == 1) {
                cellShape.setFillColor(sf::Color::Green);  // Cor para o caminho
            } else if (grid[y][x] == 2) {
                cellShape.setFillColor(sf::Color::Red);  // Cor para o ponto de spawn
            } else {
                cellShape.setFillColor(sf::Color::White);  // Cor para células vazias
            }
            cellShape.setPosition(x * 32, y * 32);
            window.draw(cellShape);
        }
    }
}
