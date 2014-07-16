#include "systems/graphics/texture/texturecache.hpp"

tc::texIdType tc::TextureCache::texIDCounter = 0;

bool tc::TextureCache::LoadFromFile(const std::string &fileName, const sf::IntRect &area)
{
    // lookup if these parameters already exist
    for(containerType::const_iterator iter_texStore = textureStorage.begin(); iter_texStore != textureStorage.end();  ++iter_texStore)
    {
        if( (*iter_texStore)->metaData.fileName == fileName )
            if( (*iter_texStore)->metaData.loadedFrom == LOADED_FROM_FILE )
            {
                #ifdef DEBUG
                    std::cout << "DUPLICATE TEXTURE " << fileName << " ALREADY IN TEXTURE CACHE: NO LOADING PERFORMED\n";
                #endif // DEBUG
                return false;
            }
    }
    // There must be a better way than this nasty nested if mess.  If it proves to be a performance problem, investigate it.

    // texture was not found already existing in here, so load it
    bool result;
    std::unique_ptr<tc::Texture> texture(new tc::Texture);
    result = texture->loadFromFile(fileName, area);
    texture->metaData.fileName = fileName;
    texture->metaData.loadedFrom = LOADED_FROM_FILE;
    texture->metaData.rect = area;
    texture->texID = texIDCounter;

    // add it to the storage
    #ifdef DEBUG
        std::cout << "Adding texture " << fileName << " with texID# " << texIDCounter << "\n";
    #endif // DEBUG
    textureStorage.push_back( std::move(texture) );
    ++texIDCounter;

    return result;
}

tc::Texture& tc::TextureCache::Get(const texIdType texID) const
{
    #ifdef DEBUG
    try
    {
    #endif // DEBUG

    return *textureStorage.at(texID);

    #ifdef DEBUG
    }
    catch (const std::out_of_range &fu)
    {
        std::cerr << "tc::TextureCache::Get texID: " << texID << " std::out_of_range.\n";
        assert(0);
        static tc::Texture irrelevent;
        return irrelevent;
    }
    #endif // DEBUG
}

