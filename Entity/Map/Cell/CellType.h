#pragma once

#include <SFML/Graphics/Color.hpp>

#include <Entity/EntityGlobals.h>

BEGIN_ENTITY_NAMESPACE

enum class CellType {
    Empty = 0,
    Path = 1,
    SpawnPoint = 2,
    PlayerBase = 3,
    Wall = 4,
};

static sf::Color getCellColorByType( const CellType& cellType ) {
    switch ( cellType ) {
    case CellType::Empty: {
        return sf::Color::Green;
    }
    case CellType::Path: {
        return sf::Color::Red;
    }
    case CellType::SpawnPoint: {
        return sf::Color::Blue;
    }
    case CellType::PlayerBase: {
        return sf::Color::Yellow;
    }
    case CellType::Wall: {
        return sf::Color::Black;
    }
    default: {
        return sf::Color::White;
    }
    }
}

END_ENTITY_NAMESPACE
