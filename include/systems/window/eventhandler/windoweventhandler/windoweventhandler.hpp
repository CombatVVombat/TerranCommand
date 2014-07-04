#ifndef WINDOWEVENTHANDLER_HPP_INCLUDED
#define WINDOWEVENTHANDLER_HPP_INCLUDED

#include <memory>
#include <SFML/Graphics.hpp>
#include "systems/window/eventhandler/abstract/Ieventhandler.hpp"

namespace tc
{
    class WindowEventHandler : public tc::IEventHandler
    {
    public:
        void HandleEvents(sf::Window &window) const;
    };
}



#endif // WINDOWEVENTHANDLER_HPP_INCLUDED
