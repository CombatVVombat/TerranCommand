#ifndef TEXTURECACHE_HPP_INCLUDED
#define TEXTURECACHE_HPP_INCLUDED

#include <assert.h>
#include <unordered_map>
#include <memory>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "systems/graphics/texture/texturemetadata.hpp"

namespace tc
{
////////////////////////////////////////////////////////////////////////////////////////////////
    class TexPack
    {
    public:
        TexPack() : texPtr(new sf::Texture) {}
        tc::TextureMetaData metaData;
        std::unique_ptr<sf::Texture> texPtr;
    };
////////////////////////////////////////////////////////////////////////////////////////////////


    typedef uint16_t texIdType;
    typedef std::unordered_map<texIdType, TexPack> containerType;


/////////////////////////////////////////////////////////////////////////////////////////////////
    class TextureCache : sf::NonCopyable
    {
    public:
        bool LoadFromFile(const std::string &fileName, const sf::IntRect &area=sf::IntRect());
        sf::Texture& Get(const texIdType texID) const;

    private:
        containerType textureMap;
        static texIdType texIDCounter;
    };
}
////////////////////////////////////////////////////////////////////////////////////////////////



#endif // TEXTURECACHE_HPP_INCLUDED
