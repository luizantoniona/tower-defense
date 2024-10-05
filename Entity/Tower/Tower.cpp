#include "Tower.h"

BEGIN_ENTITY_NAMESPACE

Tower::Tower( TowerType towerType, int sides, float radius, const sf::Vector2f& position, const sf::Color& color )
    : _towerType( towerType ), _shape( sides, radius, position, color ) {
}

Shape Tower::getUnity() const {
    return _shape;
}

TowerType Tower::getTowerType() const {
    return _towerType;
}

void Tower::setTowerType( const TowerType& towerType ) {
    _towerType = towerType;
}

END_ENTITY_NAMESPACE
