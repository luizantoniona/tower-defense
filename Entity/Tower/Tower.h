#pragma once

#include <SFML/Graphics/PrimitiveType.hpp>

#include <Entity/EntityGlobals.h>
#include <Entity/Shape.h>
#include <Entity/Tower/TowerType.h>

BEGIN_ENTITY_NAMESPACE

class Tower {
public:
    Tower( TowerType towerType, int sides, float radius, const sf::Vector2f& position, const sf::Color& color );

    Shape getUnity() const;

    TowerType getTowerType() const;
    void setTowerType( const TowerType& towerType );

private:
    TowerType _towerType;
    Shape _shape;
};

END_ENTITY_NAMESPACE
