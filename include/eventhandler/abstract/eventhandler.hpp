#ifndef EVENTHANDLER_HPP_INCLUDED
#define EVENTHANDLER_HPP_INCLUDED

#include <SFML/Graphics.hpp>

class EventHandler
{
public:
    virtual void HandleEvents() = 0;

private:
};



#endif // EVENTHANDLER_HPP_INCLUDED