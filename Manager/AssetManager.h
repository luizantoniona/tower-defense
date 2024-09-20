#pragma once

#include <map>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include <Manager/ManagerGlobals.h>
#include <Asset/AssetType.h>

BEGIN_MANAGER_NAMESPACE

class AssetManager {
public:
    static AssetManager& instance();

    const sf::Font& font(FontType fontType);

private:
    AssetManager() = default;
    AssetManager(const AssetManager&) = delete;
    AssetManager& operator=(const AssetManager&) = delete;

    std::map<FontType, sf::Font> _fonts;

    std::string fontPath(FontType fontType);
};

END_MANAGER_NAMESPACE
