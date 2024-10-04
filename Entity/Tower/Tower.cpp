#include "Tower.h"

BEGIN_ENTITY_NAMESPACE

Tower::Tower( TowerType towerType ) : _towerType( towerType ) {
}

TowerType Tower::getTowerType() const {
    return _towerType;
}

void Tower::setTowerType( const TowerType& towerType ) {
    _towerType = towerType;
}

END_ENTITY_NAMESPACE
