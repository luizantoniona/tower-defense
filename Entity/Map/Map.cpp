#include "Map.h"

#include <SFML/Graphics/Color.hpp>
#include <jsoncpp/json/json.h>
#include <jsoncpp/json/value.h>
#include <sys/types.h>

#include <Asset/AssetType.h>
#include <Entity/Map/CellType.h>
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

            sf::Color color = sf::Color::White;
            switch ( cellType ) {
            case CellType::Empty: {
                color = sf::Color::Green;
                break;
            }
            case CellType::Path: {
                color = sf::Color::Red;
                break;
            }
            case CellType::SpawnPoint: {
                color = sf::Color::Blue;
                break;
            }
            case CellType::PlayerBase: {
                color = sf::Color::Yellow;
                break;
            }
            default: {
                break;
            }
            }

            Cell cell( x * cellWidth, y * cellHeight, 0, cellWidth, cellHeight,
                       cellType, color );

            _grid.push_back( cell );
        }
    }
}

void Map::render( sf::RenderWindow& window ) {
    for ( const Cell& cell : _grid ) {
        sf::RectangleShape rectangle(
            sf::Vector2f( cell.width(), cell.height() ) );
        rectangle.setPosition( cell.x(), cell.y() );
        rectangle.setFillColor( cell.color() );

        window.draw( rectangle );
    }
}

END_ENTITY_NAMESPACE
