#ifndef IEVENTHANDLER_HPP_INCLUDED
#define IEVENTHANDLER_HPP_INCLUDED

#include <SFML/Window.hpp>

namespace tc
{
    class IEventHandler
    {
    public:
        virtual void HandleEvents(sf::Window &window) = 0;

    private:
    };
}


#endif // IEVENTHANDLER_HPP_INCLUDED
