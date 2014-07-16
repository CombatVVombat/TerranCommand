#ifndef SPRITE_HPP_INCLUDED
#define SPRITE_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include "systems/graphics/drawable/drawable.hpp"


namespace tc
{
    class Sprite : public tc::Drawable
    {
    //////////// METHODS //////////////////////////////////////////////////
    public:
        Sprite();
        explicit Sprite(const tc::Texture &tex);
        Sprite(const tc::Texture &tex, const sf::IntRect &rect);

    private:
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;
        sf::FloatRect GetLocalBounds() const;
        void UpdateVertices();


    /////////// MEMBERS //////////////////////////////////////////////////
    private:
        sf::Vertex vertices[4];
        sf::Transform transform;
    };
}



#endif // SPRITE_HPP_INCLUDED
