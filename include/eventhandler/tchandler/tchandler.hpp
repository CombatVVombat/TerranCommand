#ifndef TCHANDLER_HPP_INCLUDED
#define TCHANDLER_HPP_INCLUDED

#include "eventhandler/abstract/eventhandler.hpp"

class TCHandler : public EventHandler
{
public:
    void HandleEvents();
};



#endif // TCHANDLER_HPP_INCLUDED
