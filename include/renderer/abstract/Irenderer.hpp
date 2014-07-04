#ifndef IRENDERER_HPP_INCLUDED
#define IRENDERER_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include "renderer/abstract/IrenderQueue.hpp"

namespace tc
{
    class IRenderer
    {
    public:
        virtual void Render(IRenderQueue &renderQueue, sf::RenderTarget &rt) = 0;
    };
}



#endif // IRENDERER_HPP_INCLUDED
