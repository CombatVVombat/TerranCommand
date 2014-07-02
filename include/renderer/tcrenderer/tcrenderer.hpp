#ifndef TCRENDERER_HPP_INCLUDED
#define TCRENDERER_HPP_INCLUDED

#include <memory>
#include <SFML/Graphics.hpp>
#include "renderer/abstract/renderer.hpp"


class TCRenderer : public Renderer
{
public:
    TCRenderer(std::unique_ptr<sf::RenderWindow> rW);
    void Render();

private:
    std::unique_ptr<sf::RenderWindow> renderWindow;
};



#endif // TCRENDERER_HPP_INCLUDED
