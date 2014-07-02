
#include <memory>
#include "engine/engine.hpp"
#include "renderer/tcrenderer/tcrenderer.hpp"
#include "eventhandler/tchandler/tchandler.hpp"

int main()
{
    // make necessary subsystems for the engine
    std::unique_ptr<sf::RenderWindow> renderWindow(new sf::RenderWindow(sf::VideoMode(1024,768,32), "Terran Command"));
    std::unique_ptr<Renderer> tcRenderer(new TCRenderer(std::move(renderWindow)));
    std::unique_ptr<EventHandler> tcEventHandler(new TCHandler);

    // fire it up
    Engine engine(std::move(tcRenderer), std::move(tcEventHandler));

    // dont like the fact that basic window events are handled by the renderer.
    // how to abstract that shit out?  Who knows.
    engine.DoSomeTemporaryShit();

    return 0;
}

