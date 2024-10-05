#include "Map.h"

#include <SFML/Graphics/Color.hpp>
#include <jsoncpp/json/json.h>
#include <jsoncpp/json/value.h>
#include <sys/types.h>

#include <Asset/AssetType.h>
#include <Entity/Map/Cell/CellType.h>
#include <Manager/AssetManager.h>

using Entity::CellType;
using Manager::AssetManager;

BEGIN_ENTITY_NAMESPACE

Map::Map( MapType mapType, int mapWidth, int mapHeight, int windowWidth, int windowHeight )
    : _mapType( mapType ), _nrWidthCells( 0 ), _nrheightCells( 0 ), _mapWidth( mapWidth ), _mapHeight( mapHeight ),
      _windowWidth( windowWidth ), _windowHeight( windowHeight ) {

    Json::Value mapJson = AssetManager::instance().map( mapType );

    _nrWidthCells = mapJson[ "width" ].asInt();
    _nrheightCells = mapJson[ "height" ].asInt();

    int cellWidth = _mapWidth / _nrWidthCells;
    int cellHeight = _mapHeight / _nrheightCells;

    for ( int y = 0; y < _nrheightCells; ++y ) {
        for ( int x = 0; x < _nrWidthCells; ++x ) {
            CellType cellType = static_cast<CellType>( mapJson[ "cells" ][ y ][ x ].asInt() );
            Cell cell( cellType, x * cellWidth, y * cellHeight, cellWidth, cellHeight );
            _grid.push_back( cell );
        }
    }
}

void Map::render( sf::RenderWindow& window ) {
    for ( const Cell& cell : _grid ) {
        window.draw( cell.getRectangle() );
    }
}

END_ENTITY_NAMESPACE
