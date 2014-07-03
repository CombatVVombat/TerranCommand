#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include <memory>
#include "renderer/abstract/Irenderer.hpp"
#include "eventhandler/abstract/Ieventhandler.hpp"

class Engine
{
private:
    std::unique_ptr<IRenderer> renderer;
    std::unique_ptr<IEventHandler> eventHandler;
    std::shared_ptr<sf::RenderWindow> renderWindow;

public:
    Engine(std::unique_ptr<IRenderer> r, std::unique_ptr<IEventHandler> eh, std::shared_ptr<sf::RenderWindow> rW);
    void DoSomeTemporaryShit();
};



#endif // ENGINE_H_INCLUDED
