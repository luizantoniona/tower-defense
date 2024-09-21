#include "Cell.h"

#include <SFML/Graphics/Color.hpp>

BEGIN_ENTITY_NAMESPACE

Cell::Cell( uint x, uint y, uint z, uint width, uint height, CellType cellType,
            sf::Color color )
    : _x( x ), _y( y ), _z( z ), _width( width ), _height( height ),
      _cellType( cellType ), _color( color ) {}

uint Cell::x() const { return _x; }
void Cell::setX( const uint& x ) { _x = x; }

uint Cell::y() const { return _y; }
void Cell::setY( const uint& y ) { _y = y; }

uint Cell::z() const { return _z; }
void Cell::setZ( const uint& z ) { _z = z; }

uint Cell ::width() const { return _width; }
void Cell ::setWidth( const uint& width ) { _width = width; }

uint Cell ::height() const { return _height; }
void Cell ::setHeight( const uint& height ) { _height = height; }

CellType Cell::cellType() const { return _cellType; }
void Cell::setCellType( const CellType& cellType ) { _cellType = cellType; }

sf::Color Cell::color() const { return _color; }
void Cell::setColor( const sf::Color& color ) { _color = color; }

END_ENTITY_NAMESPACE
