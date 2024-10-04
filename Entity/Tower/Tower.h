#pragma once

#include <SFML/Graphics/Shape.hpp>

#include <Entity/EntityGlobals.h>
#include <Entity/Tower/TowerType.h>

BEGIN_ENTITY_NAMESPACE

class Tower {
public:
    Tower( TowerType towerType );

    TowerType getTowerType() const;
    void setTowerType( const TowerType& towerType );

private:
    TowerType _towerType;
};

END_ENTITY_NAMESPACE
