#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include <memory>
#include "renderer/abstract/renderer.hpp"
#include "eventhandler/abstract/eventhandler.hpp"

class Engine
{
private:
    std::unique_ptr<Renderer> renderer;
    std::unique_ptr<EventHandler> eventHandler;

public:
    Engine(std::unique_ptr<Renderer> r, std::unique_ptr<EventHandler> eh);
    void DoSomeTemporaryShit();
};



#endif // ENGINE_H_INCLUDED
