#include "Cell.h"

#include <SFML/System/Vector2.hpp>

BEGIN_ENTITY_NAMESPACE

Cell::Cell( CellType cellType, int x, int y, int width, int height )
    : _cellType( cellType ), _rectangle() {

    _rectangle.setSize( sf::Vector2f( width, height ) );
    _rectangle.setPosition( sf::Vector2f( x, y ) );
    _rectangle.setFillColor( getCellColorByType( _cellType ) );
}

CellType Cell::getCellType() const { return _cellType; }
void Cell::setCellType( const CellType& cellType ) { _cellType = cellType; }

sf::RectangleShape Cell::getRectangle() const { return _rectangle; }
void Cell::setRectangle( const sf::RectangleShape& rectangle ) {
    _rectangle = rectangle;
}

END_ENTITY_NAMESPACE
