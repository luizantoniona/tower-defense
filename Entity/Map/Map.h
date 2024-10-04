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
    Map( MapType mapType, int mapHeight, int mapWidth );

    void render( sf::RenderWindow& window );

private:
    MapType _mapType;
    int _width;
    int _height;
    std::list<Cell> _grid;
};

END_ENTITY_NAMESPACE
