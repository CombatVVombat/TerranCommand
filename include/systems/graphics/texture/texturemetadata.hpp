#ifndef TEXTUREMETADATA_HPP_INCLUDED
#define TEXTUREMETADATA_HPP_INCLUDED

#include <string>
#include <SFML/Graphics.hpp>

namespace tc
{
    enum LoadedFrom
    {
        LOADED_FROM_FILE,
        LOADED_FROM_MEMORY,
        LOADED_FROM_STREAM,
        LOADED_FROM_IMAGE
    };

    class TextureMetaData
    {
    public:
        TextureMetaData() {}
        TextureMetaData(LoadedFrom lF, const std::string &fn, const sf::IntRect &r);

    public:
        LoadedFrom loadedFrom;
        std::string fileName;
        sf::IntRect rect;
    };
}



#endif // TEXTUREMETADATA_HPP_INCLUDED
