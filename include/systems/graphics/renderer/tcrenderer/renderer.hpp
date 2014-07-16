#ifndef RENDERER_HPP_INCLUDED
#define RENDERER_HPP_INCLUDED

#include <memory>
#include <SFML/Graphics.hpp>
#include "systems/graphics/renderer/abstract/Irenderer.hpp"
#include "systems/graphics/renderer/tcrenderer/renderqueue.hpp"

// Renderer takes a render queue (full of individual render items) and draws them to the given render target.  That's it.  No moar.

namespace tc
{
    class Renderer : public tc::IRenderer
    {
    public:
        void Draw(const tc::IRenderQueue &renderQueue,
                  const std::vector<std::unique_ptr<sf::Drawable> > &renderBucket,
                    sf::RenderTarget &rt) const;
        static std::unique_ptr<tc::Renderer> Factory();
    };
}

#endif // RENDERER_HPP_INCLUDED
