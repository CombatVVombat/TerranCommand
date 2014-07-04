#include "systems/window/window.hpp"

tc::sys::Window::Window(std::unique_ptr<sf::RenderWindow> w)
:
    window(std::move(w))
{
}

void tc::sys::Window::Update()
{
    eventHandler.HandleEvents(*window);
}

sf::RenderWindow& tc::sys::Window::GetWindow() const
{
    return *window;
}
