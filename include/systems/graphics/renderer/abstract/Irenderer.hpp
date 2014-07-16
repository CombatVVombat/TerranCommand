#ifndef IRENDERER_HPP_INCLUDED
#define IRENDERER_HPP_INCLUDED

#include <memory>
#include <SFML/Graphics.hpp>
#include "systems/graphics/renderer/abstract/IrenderQueue.hpp"

namespace tc
{
    class IRenderer : sf::NonCopyable
    {
    public:
        virtual void Draw(const tc::IRenderQueue &renderQueue,
                          const std::vector<std::unique_ptr<sf::Drawable> > &renderBucket,
                          sf::RenderTarget &rt) const = 0;
    };
}



#endif // IRENDERER_HPP_INCLUDED
