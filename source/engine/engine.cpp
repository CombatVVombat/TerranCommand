#include "engine/engine.hpp"

Engine::Engine(std::unique_ptr<IRenderer> r, std::unique_ptr<IEventHandler> eh, std::shared_ptr<sf::RenderWindow> rW)
:
    renderer(std::move(r)),
    eventHandler(std::move(eh)),
    renderWindow(std::move(rW))
{
}

void Engine::DoSomeTemporaryShit()
{
    renderer->Render(*renderWindow);
    eventHandler->HandleEvents();
}
