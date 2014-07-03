#include "renderer/tcrenderer/tcrenderer.hpp"

TCRenderer::TCRenderer()
{
}

void TCRenderer::Render(sf::RenderWindow &rt)
{
    rt.clear();
    rt.display();
}
