#pragma once

#include <list>

#include <SFML/Graphics.hpp>

#include <Entity/EntityGlobals.h>
#include <Entity/Map/Cell/Cell.h>
#include <Entity/Map/MapType.h>

using Entity::Cell;
using Entity::MapType;

BEGIN_ENTITY_NAMESPACE

class Map {
public:
    Map( MapType mapType, int mapWidth, int mapHeight, int windowWidth, int windowHeight );

    void render( sf::RenderWindow& window );

private:
    MapType _mapType;
    int _nrWidthCells;
    int _nrheightCells;
    int _mapWidth;
    int _mapHeight;
    int _windowWidth;
    int _windowHeight;
    std::list<Cell> _grid;
};

END_ENTITY_NAMESPACE
