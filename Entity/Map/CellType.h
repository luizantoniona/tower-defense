#pragma once

#include <Entity/EntityGlobals.h>

BEGIN_ENTITY_NAMESPACE

enum class CellType {
    Empty = 0,
    Path = 1,
    SpawnPoint = 2,
    PlayerBase = 3,
    Wall = 4,
};

END_ENTITY_NAMESPACE
