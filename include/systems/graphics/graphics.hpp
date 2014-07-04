#ifndef GRAPHICS_HPP_INCLUDED
#define GRAPHICS_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include "systems/abstract/Isystem.hpp"
#include "renderer/abstract/Irenderer.hpp"
#include "renderer/tcrenderer/renderqueue.hpp"

namespace tc
{
    namespace sys
    {
        class Graphics : public tc::sys::ISystem
        {
        public:
            Graphics(std::unique_ptr<tc::IRenderer> r);
            void Update();
            void Display(sf::RenderWindow &rW);
            void Render(sf::RenderTarget &rT);

        private:
            std::unique_ptr<tc::IRenderer> renderer;
            tc::RenderQueue opaque;
            tc::RenderQueue translucent;
        };
    }
}



#endif // GRAPHICS_HPP_INCLUDED
