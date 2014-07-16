#ifndef DRAWABLE_HPP_INCLUDED
#define DRAWABLE_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include "systems/graphics/material/material.hpp"

namespace tc
{
    class Drawable : sf::NonCopyable, public sf::Drawable
    {
    //////////// METHODS ////////////////////////////////////////////////////////////////
    protected:
        virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const = 0;

    //////////// MEMBERS ////////////////////////////////////////////////////////////////
    public:
        tc::Material material;
    };
}



#endif // DRAWABLE_HPP_INCLUDED
