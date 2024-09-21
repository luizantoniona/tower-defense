#pragma once

#include <Entity/EntityGlobal.h>

BEGIN_ENTITY_NAMESPACE

enum class CellType {
    Empty,
    Wall,
    Path,
    SpawnPoint,
    PlayerBase,
};

END_ENTITY_NAMESPACE