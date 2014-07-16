#ifndef GRAPHICS_HPP_INCLUDED
#define GRAPHICS_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include "renderer/abstract/Irenderer.hpp"
#include "systems/graphics/drawable/sprite.hpp"
#include "renderer/tcrenderer/renderqueue.hpp"
#include "systems/graphics/texture/texturecache.hpp"

namespace tc
{
    namespace sys
    {
        class Graphics
        {
        public:
        ////////// Methods ////////////////////////////////////////////////
            Graphics(std::unique_ptr<tc::IRenderer> r);
            void Display(sf::RenderWindow &rW) const;
            void Draw(sf::RenderTarget &rT);
        ///////////////////////////////////////////////////////////////////

        ////////// Members ////////////////////////////////////////////////
        private:
            std::unique_ptr<tc::IRenderer> renderer;

            std::vector<std::unique_ptr<sf::Drawable> > allDrawables;   // probably temporary

            tc::TextureCache textureCache;
            tc::RenderQueue opaque;
            tc::RenderQueue translucent;
        ////////////////////////////////////////////////////////////////////
        };
    }
}



#endif // GRAPHICS_HPP_INCLUDED
