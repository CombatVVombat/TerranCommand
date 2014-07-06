#include "systems/graphics/texture/texturecache.hpp"

tc::texIdType tc::TextureCache::texIDCounter = 0;

bool tc::TextureCache::LoadFromFile(const std::string &fileName, const sf::IntRect &area)
{
    // lookup if these parameters already exist
    for(containerType::const_iterator iter_texMap = textureMap.begin(); iter_texMap != textureMap.end();  ++iter_texMap)
    {
        if( (iter_texMap->second).metaData.fileName == fileName )
            if( (iter_texMap->second).metaData.loadedFrom == LOADED_FROM_FILE )
                if( (iter_texMap->second).metaData.rect.left == area.left )
                    if( (iter_texMap->second).metaData.rect.top == area.top )
                    {
                        #ifdef DEBUG
                            std::cout << "DUPLICATE TEXTURE " << fileName << " ALREADY IN TEXTURE CACHE: NO LOADING PERFORMED\n";
                        #endif // DEBUG
                        return false;
                    }
    }
    // There must be a better way than this nasty nested if mess.  If it proves to be a performance problem, investigate it.

    // texture was not found already existing in here, so load it
    tc::TexPack texture;
    bool result;
    result = texture.texPtr->loadFromFile(fileName, area);
    texture.metaData.fileName = fileName;
    texture.metaData.loadedFrom = LOADED_FROM_FILE;
    texture.metaData.rect = area;

    // add it to the storage
    #ifdef DEBUG
        std::cout << "Adding texture " << fileName << " with texID# " << texIDCounter << "\n";
    #endif // DEBUG
    textureMap.insert( std::make_pair(texIDCounter, std::move(texture)));
    ++texIDCounter;

    return result;
}

sf::Texture& tc::TextureCache::Get(const texIdType texID) const
{
    #ifdef DEBUG
    try
    {
    #endif // DEBUG

    return *(textureMap.at(texID).texPtr);

    #ifdef DEBUG
    }
    catch (const std::out_of_range &fu)
    {
        std::cerr << "tc::TextureCache::Get texID: " << texID << " std::out_of_range.\n";
        assert(0);
        static sf::Texture irrelevent;
        return irrelevent;
    }
    #endif // DEBUG
}

