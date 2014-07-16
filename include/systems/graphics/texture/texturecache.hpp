#ifndef TEXTURECACHE_HPP_INCLUDED
#define TEXTURECACHE_HPP_INCLUDED

#include <assert.h>
#include <unordered_map>
#include <memory>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "systems/graphics/texture/texture.hpp"


namespace tc
{

    typedef std::vector< std::unique_ptr<tc::Texture> > containerType;

/////////////////////////////////////////////////////////////////////////////////////////////////
    class TextureCache : sf::NonCopyable
    {
    public:
        bool LoadFromFile(const std::string &fileName, const sf::IntRect &area=sf::IntRect());
        tc::Texture& Get(const texIdType texID) const;

    private:
        containerType textureStorage;
        static texIdType texIDCounter;
    };
}
////////////////////////////////////////////////////////////////////////////////////////////////



#endif // TEXTURECACHE_HPP_INCLUDED
