#pragma once

#include <vector>

#include <SFML/Graphics.hpp>

class Map {
public:
    Map(int width, int height);

    void loadFromFile(const std::string& filename);
    bool isPositionValid(const sf::Vector2i& position) const;
    sf::Vector2i getSpawnPoint() const;
    const std::vector<sf::Vector2i>& getPath() const;
    void render(sf::RenderWindow& window);

private:
    int width;
    int height;
    std::vector<std::vector<int>> grid;  // Representa o grid do mapa (0 = vazio, 1 = caminho, 2 = torres)
    sf::Vector2i spawnPoint;
    std::vector<sf::Vector2i> path;  // Células que representam o caminho dos inimigos

    // Métodos auxiliares para carregar o mapa
    void parseCell(int value, int x, int y);
};
