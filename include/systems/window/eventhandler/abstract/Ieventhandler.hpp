#ifndef IEVENTHANDLER_HPP_INCLUDED
#define IEVENTHANDLER_HPP_INCLUDED

#include <SFML/Window.hpp>

namespace tc
{
    class IEventHandler : sf::NonCopyable
    {
    public:
        virtual void HandleEvents(sf::Window &window) const = 0;

    private:
    };
}


#endif // IEVENTHANDLER_HPP_INCLUDED
