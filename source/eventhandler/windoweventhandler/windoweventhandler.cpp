#include "eventhandler/windoweventhandler/windoweventhandler.hpp"

void tc::WindowEventHandler::HandleEvents(sf::Window &window) const
{
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                default:
                    break;
            }
        }
    }
}
