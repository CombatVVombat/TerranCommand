#include "systems/graphics/texture/texturemetadata.hpp"

tc::TextureMetaData::TextureMetaData(LoadedFrom lF, const std::string &fn, const sf::IntRect &r)
:
    loadedFrom(lF),
    fileName(fn),
    rect(r)
{
}
