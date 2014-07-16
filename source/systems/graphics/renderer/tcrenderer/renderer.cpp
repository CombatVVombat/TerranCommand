#include "systems/graphics/renderer/tcrenderer/renderer.hpp"

void tc::Renderer::Draw(const IRenderQueue &renderQueue,
                        const std::vector<std::unique_ptr<sf::Drawable> > &renderBucket,
                        sf::RenderTarget &rt) const
{
    rt.clear();

    //////// TEMPORARY:  Need to sort and use indicies instead of iterating the entire thing ////////////
    for(std::vector<std::unique_ptr<sf::Drawable> >::const_iterator iter_AllDrawables = renderBucket.begin();
        iter_AllDrawables != renderBucket.end(); iter_AllDrawables++)
        {
            rt.draw( **iter_AllDrawables );
        }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////
}

std::unique_ptr<tc::Renderer> tc::Renderer::Factory()
{
    std::unique_ptr<tc::Renderer> r(new tc::Renderer);
    return r;
}
