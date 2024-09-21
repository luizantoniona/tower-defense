#pragma once

#include <sys/types.h>

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>

#include <Entity/EntityGlobals.h>
#include <Entity/Map/CellType.h>

BEGIN_ENTITY_NAMESPACE

class Cell {
public:
    Cell( uint x, uint y, uint z, uint width, uint height, CellType cellType,
          sf::Color color );

    uint x() const;
    void setX( const uint& x );

    uint y() const;
    void setY( const uint& x );

    uint z() const;
    void setZ( const uint& x );

    uint width() const;
    void setWidth( const uint& width );

    uint height() const;
    void setHeight( const uint& height );

    CellType cellType() const;
    void setCellType( const CellType& cellType );

    sf::Color color() const;
    void setColor( const sf::Color& color );

private:
    uint _x;
    uint _y;
    uint _z;
    uint _width;
    uint _height;
    CellType _cellType;
    sf::Color _color;
};

END_ENTITY_NAMESPACE
