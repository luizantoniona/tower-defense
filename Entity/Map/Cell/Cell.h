#pragma once

#include <SFML/Graphics/RectangleShape.hpp>

#include <Entity/EntityGlobals.h>
#include <Entity/Map/Cell/CellType.h>

BEGIN_ENTITY_NAMESPACE

class Cell {
public:
    Cell( CellType cellType, int x, int y, int width, int height );

    CellType getCellType() const;
    void setCellType( const CellType& cellType );

    sf::RectangleShape getRectangle() const;
    void setRectangle( const sf::RectangleShape& rectangle );

private:
    CellType _cellType;
    sf::RectangleShape _rectangle;
};

END_ENTITY_NAMESPACE
