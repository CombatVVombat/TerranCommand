#ifndef RENDERER_HPP_INCLUDED
#define RENDERER_HPP_INCLUDED

#include <memory>
#include <SFML/Graphics.hpp>
#include "renderer/abstract/Irenderer.hpp"
#include "renderer/tcrenderer/renderqueue.hpp"

// Renderer takes a render queue (full of individual render items) and draws them to the given render target.  That's it.  No moar.

namespace tc
{
    class Renderer : public tc::IRenderer
    {
    public:
        void Render(tc::IRenderQueue &renderQueue, sf::RenderTarget &rt);
    };
}

#endif // RENDERER_HPP_INCLUDED
