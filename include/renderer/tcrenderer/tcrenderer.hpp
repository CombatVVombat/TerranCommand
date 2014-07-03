#ifndef TCRENDERER_HPP_INCLUDED
#define TCRENDERER_HPP_INCLUDED

#include <memory>
#include <SFML/Graphics.hpp>
#include "renderer/abstract/Irenderer.hpp"


class TCRenderer : public IRenderer
{
public:
    TCRenderer();
    void Render(sf::RenderWindow &rt);
};

#endif // TCRENDERER_HPP_INCLUDED
