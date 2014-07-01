#ifndef EVENTHANDLER_HPP_INCLUDED
#define EVENTHANDLER_HPP_INCLUDED

class EventHandler
{
public:
    EventHandler(sf::RenderWindow renderWindow);

    void PollEvents();

private:
    sf::Event event;
};



#endif // EVENTHANDLER_HPP_INCLUDED
