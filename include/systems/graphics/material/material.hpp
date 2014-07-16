#ifndef MATERIAL_HPP_INCLUDED
#define MATERIAL_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include "systems/graphics/texture/texture.hpp"
#include "systems/graphics/renderer/tcrenderer/sortKey.hpp"

namespace tc
{
    enum LayerType
    {
        FULL_SCREEN,
        NORMAL
    };

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
    class Material : sf::NonCopyable
    {
    //////////////////////////// METHODS ///////////////////////////////////
    public:
        Material();
        Material(const sf::BlendMode &bM, const tc::Texture *tex, const sf::IntRect &rect,
                 const sf::Shader *shader, const tc::LayerType &layer);

        const tc::Texture* GetTexture() const;
        void SetTexture(const tc::Texture &tex);
        void SetTextureRect(const sf::IntRect &rect);
        void SetShader(const sf::Shader *shader);


    //////////////////////////// MEMBERS ////////////////////////////////////
    public:
        sf::BlendMode blendMode;
        sf::IntRect texRect;
        LayerType layerType;
    protected:
        const tc::Texture *texture;
        const sf::Shader *shader;

    };
}
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////



#endif // MATERIAL_HPP_INCLUDED
