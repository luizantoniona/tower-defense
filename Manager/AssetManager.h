#pragma once

#include <map>

#include <jsoncpp/json/json.h>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include <Asset/AssetType.h>
#include <Manager/ManagerGlobals.h>
#include <Map/MapType.h>

using Entity::MapType;

BEGIN_MANAGER_NAMESPACE

class AssetManager {
public:
    static AssetManager& instance();

    const sf::Font& font( FontType fontType );
    const Json::Value& map( MapType mapType );

private:
    AssetManager() = default;
    AssetManager( const AssetManager& ) = delete;
    AssetManager& operator=( const AssetManager& ) = delete;

    std::string fontPath( FontType fontType );
    std::string mapPath( MapType mapType );

    std::map<FontType, sf::Font> _fonts;
    std::map<MapType, Json::Value> _maps;
};

END_MANAGER_NAMESPACE
