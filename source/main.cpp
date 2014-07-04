#include <memory>
#include "engine/engine.hpp"
#include "systems/window/renderwindow.hpp"
#include "systems/graphics/renderer/tcrenderer/renderer.hpp"

// Random Thoughts //
// Currently windoweventhandler only deals with events which directly effect the window.  Other events should be passed (as messages?) to other systems to handle.



int main()
{
    // start components to pass to the engine
    std::unique_ptr<tc::RenderWindow> aRenderWindow = tc::RenderWindow::Factory(sf::VideoMode(1024,768,32), "Terran Command", sf::Style::Close | sf::Style::Titlebar);
    std::unique_ptr<tc::IRenderer> aRenderer = tc::Renderer::Factory();

    std::unique_ptr<tc::sys::Graphics> graphicsSystem( new tc::sys::Graphics( std::move(aRenderer)) );
    std::unique_ptr<tc::sys::Window> windowSystem( new tc::sys::Window( std::move(aRenderWindow)) );

    // fire it up
    // Note: because of the move semantics, engine takes ownership of these components.  The pointers are no longer valid in main() scope
    tc::Engine engine(std::move(windowSystem), std::move(graphicsSystem));
    engine.DoSomeTemporaryShit();

    return 0;
}

