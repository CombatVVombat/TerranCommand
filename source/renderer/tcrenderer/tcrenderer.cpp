#include "renderer/tcrenderer/tcrenderer.hpp"

TCRenderer::TCRenderer(std::unique_ptr<sf::RenderWindow> rW)
:
    renderWindow(std::move(rW))
{
}

void TCRenderer::Render()
{
    while(renderWindow->isOpen())
    {
        sf::Event event;
        while(renderWindow->pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                renderWindow->close();
        }

        renderWindow->clear();
        renderWindow->display();
    }
}
