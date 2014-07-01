
#include "engine/engine.hpp"

int main()
{
    Engine engine;  // fire it up

    sf::CircleShape shape(100.0f);
    shape.setFillColor(sf::Color::Green);

    while(window.isOpen())
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
    }
    return 0;
}

