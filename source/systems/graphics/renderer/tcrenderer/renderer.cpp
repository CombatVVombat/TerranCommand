#include "systems/graphics/renderer/tcrenderer/renderer.hpp"

void tc::Renderer::Render(const IRenderQueue &renderQueue, sf::RenderTarget &rt) const
{
    rt.clear();
}

std::unique_ptr<tc::Renderer> tc::Renderer::Factory()
{
    std::unique_ptr<tc::Renderer> r(new tc::Renderer);
    return r;
}
