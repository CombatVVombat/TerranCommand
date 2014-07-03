#include "eventhandler/windoweventhandler/windoweventhandler.hpp"

WindowEventHandler::WindowEventHandler(std::shared_ptr<sf::Window> w)
:
    window(w)
{
}

void WindowEventHandler::HandleEvents()
{
    while(window->isOpen())
    {
        sf::Event event;
        while(window->pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window->close();
        }
    }
}
