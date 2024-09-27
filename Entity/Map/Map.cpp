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

Map::Map( MapType mapType, int windowHeight, int windowWidth )
    : _width( 0 ), _height( 0 ), _mapType( mapType ) {

    Json::Value mapJson = AssetManager::instance().map( mapType );

    _height = mapJson[ "height" ].asInt();
    _width = mapJson[ "width" ].asInt();

    int cellHeight = windowHeight / _height;
    int cellWidth = windowWidth / _width;

    for ( int y = 0; y < _height; ++y ) {
        for ( int x = 0; x < _width; ++x ) {

            CellType cellType =
                static_cast<CellType>( mapJson[ "cells" ][ y ][ x ].asInt() );

            Cell cell( cellType, x * cellWidth, y * cellHeight, cellWidth,
                       cellHeight );

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
