#include "AssetManager.h"

#include <fstream>
#include <string>

#include <jsoncpp/json/json.h>

using namespace Json;

BEGIN_MANAGER_NAMESPACE

AssetManager& AssetManager::instance() {
    static AssetManager instance;
    return instance;
}

const sf::Font& AssetManager::font( FontType fontType ) {
    auto& fonts = instance()._fonts;

    auto it = fonts.find( fontType );
    if ( it != fonts.end() ) {
        return it->second;
    }

    sf::Font font;
    if ( !font.loadFromFile( fontPath( fontType ) ) ) {
        throw std::runtime_error( "Failed to load font" );
    }

    fonts[ fontType ] = std::move( font );
    return fonts[ fontType ];
}

const Json::Value& AssetManager::map( MapType mapType ) {
    auto& maps = instance()._maps;

    auto it = maps.find( mapType );
    if ( it != maps.end() ) {
        return it->second;
    }

    std::ifstream jsonFile( mapPath( mapType ) );
    Json::Value mapJson;
    jsonFile >> mapJson;

    _maps[ mapType ] = std::move( mapJson );
    return _maps[ mapType ];
}

std::string AssetManager::fontPath( FontType fontType ) {
    std::string fontPath = "";
    switch ( fontType ) {
    case FontType::Arial: {
        fontPath = "../Asset/Fonts/Arial.ttf";
        break;
    }
    default: {
        break;
    }
    }

    return fontPath;
}

std::string AssetManager::mapPath( MapType mapType ) {
    std::string mapPath = "";
    switch ( mapType ) {
    case MapType::Teste: {
        mapPath = "../Asset/Maps/Teste.json";
        break;
    }
    default: {
        break;
    }
    }

    return mapPath;
}

END_MANAGER_NAMESPACE
