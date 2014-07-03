#ifndef TCHANDLER_HPP_INCLUDED
#define TCHANDLER_HPP_INCLUDED

#include <memory>
#include <SFML/Graphics.hpp>
#include "eventhandler/abstract/Ieventhandler.hpp"

class WindowEventHandler : public IEventHandler
{
public:
    WindowEventHandler(std::shared_ptr<sf::Window> w);
    void HandleEvents();

private:
    std::shared_ptr<sf::Window> window;
};



#endif // TCHANDLER_HPP_INCLUDED
