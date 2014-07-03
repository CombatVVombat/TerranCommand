#include <memory>
#include <SFML/Graphics.hpp>
#include "engine/engine.hpp"
#include "eventhandler/windoweventhandler/windoweventhandler.hpp"
#include "renderer/tcrenderer/tcrenderer.hpp"

int main()
{
    // make necessary subsystems for the engine
    std::shared_ptr<sf::RenderWindow> renderWindow(new sf::RenderWindow(sf::VideoMode(1024,768,32), "Terran Command")); // its event handler needs a pointer to it...hence std::shared_ptr
    std::unique_ptr<IEventHandler> windowEventHandler(new WindowEventHandler(renderWindow));
    std::unique_ptr<IRenderer> tcRenderer(new TCRenderer);

    // fire it up
    // Note: because of the move semantics, engine takes ownership of these components.  The pointers are no longer valid in main() scope
    Engine engine(std::move(tcRenderer), std::move(windowEventHandler), std::move(renderWindow));

    engine.DoSomeTemporaryShit();

    return 0;
}

