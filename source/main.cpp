
#include <SFML/Graphics.hpp>
#include "engine/engine.hpp"
#include "renderer/tcrenderer/tcrenderer.hpp"
#include "eventhandler/tchandler/tchandler.hpp"

int main()
{
    // make necessary subsystems for the engine
    std::unique_ptr<Renderer> tcRenderer(new TCRenderer);
    std::unique_ptr<EventHandler> tcEventHandler(new TCHandler);
    // fire it up
    Engine engine(std::move(tcRenderer), std::move(tcEventHandler));

    /*while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }*/
    return 0;
}

