#ifndef TEXTURE_HPP_INCLUDED
#define TEXTURE_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include "systems/graphics/texture/texturemetadata.hpp"

namespace tc
{
    typedef uint16_t texIdType;

    class Texture : public sf::Texture, sf::NonCopyable
    {
    public:
        texIdType texID;
        tc::TextureMetaData metaData;
    };
}



#endif // TEXTURE_HPP_INCLUDED
