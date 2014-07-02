#include "engine/engine.hpp"

Engine::Engine(std::unique_ptr<Renderer> r, std::unique_ptr<EventHandler> eh)
:
    renderer(std::move(r)),
    eventHandler(std::move(eh))
{


}

void Engine::DoSomeTemporaryShit()
{
    renderer->Render();
    eventHandler->HandleEvents();
}
