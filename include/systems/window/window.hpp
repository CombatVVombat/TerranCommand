#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include <memory>
#include <SFML/Window.hpp>
#include "systems/abstract/Isystem.hpp"
#include "eventhandler/windoweventhandler/windoweventhandler.hpp"

namespace tc
{
    namespace sys
    {
        class Window : public tc::sys::ISystem
        {
        public:
            Window(std::unique_ptr<sf::RenderWindow> w);
            void Update();
            sf::RenderWindow& GetWindow() const;

        private:
            std::unique_ptr<sf::RenderWindow> window;
            tc::WindowEventHandler eventHandler;
        };
    }
}



#endif // WINDOW_HPP_INCLUDED
