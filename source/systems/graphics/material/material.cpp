#include "systems/graphics/material/material.hpp"

tc::Material::Material()
:   blendMode(sf::BlendNone), texRect(sf::IntRect()), layerType(NORMAL), texture(NULL), shader(NULL)
{
}

tc::Material::Material(const sf::BlendMode &bM, const tc::Texture *tex, const sf::IntRect &rect,
                       const sf::Shader *shader, const tc::LayerType &layer)
:   blendMode(bM), layerType(layer)
{
    SetTexture(*tex);
    SetTextureRect(rect);
    SetShader(shader);
}

const tc::Texture* tc::Material::GetTexture() const
{
    return texture;
}

void tc::Material::SetTexture(const tc::Texture &tex)
{
    if((!texture) && (texRect == sf::IntRect()))
        SetTextureRect( sf::IntRect(0,0,tex.getSize().x,tex.getSize().y) );
    texture = &tex;
}

void tc::Material::SetShader(const sf::Shader *shader)
{
    shader = shader;
}

void tc::Material::SetTextureRect(const sf::IntRect &rect)
{
    texRect = rect;
}
