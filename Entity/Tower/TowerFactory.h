#pragma once

#include <Entity/EntityGlobals.h>
#include <Entity/Tower/Tower.h>
#include <Entity/Tower/TowerType.h>

BEGIN_ENTITY_NAMESPACE

class TowerFactory {
public:
    static Tower create();
};

END_ENTITY_NAMESPACE
