#pragma once

#include <sys/types.h>

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>

#include <Entity/EntityGlobal.h>
#include <Entity/Map/CellType.h>

BEGIN_ENTITY_NAMESPACE

class Cell {
public:
    Cell( uint x, uint y, uint z, uint width, uint height );

    uint x();
    void setX( const uint& x );

    uint y();
    void setY( const uint& x );

    uint z();
    void setZ( const uint& x );

    sf::Color color();
    void setColor( const sf::Color& color );

    CellType cellType();
    void setCellType( const CellType& cellType );

private:
    uint _x;
    uint _y;
    uint _z;
    uint _width;
    uint _height;
    sf::Color _color;
    CellType _cellType;
};

END_ENTITY_NAMESPACE
