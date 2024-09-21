#include "Cell.h"

BEGIN_ENTITY_NAMESPACE

Cell::Cell( uint x, uint y, uint z, uint width, uint height ) {}

uint Cell::x() { return _x; }
void Cell::setX( const uint& x ) { _x = x; }

uint Cell::y() { return _y; }
void Cell::setY( const uint& y ) { _y = y; }

uint Cell::z() { return _z; }
void Cell::setZ( const uint& z ) { _z = z; }

sf::Color Cell::color() { return _color; }
void Cell::setColor( const sf::Color& color ) { _color = color; }

CellType Cell::cellType() { return _cellType; }
void Cell::setCellType( const CellType& cellType ) { _cellType = cellType; }

END_ENTITY_NAMESPACE
