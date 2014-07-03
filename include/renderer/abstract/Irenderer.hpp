#ifndef RENDERER_HPP_INCLUDED
#define RENDERER_HPP_INCLUDED

#include <SFML/Graphics.hpp>

class IRenderer
{
public:
    virtual void Render(sf::RenderWindow &rt) = 0;  // should this be sf::RenderTarget?  Hard to do, because it doesnt make display() virtual
};



#endif // RENDERER_HPP_INCLUDED
