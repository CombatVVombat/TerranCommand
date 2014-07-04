#include "systems/window/renderwindow.hpp"

tc::RenderWindow::RenderWindow(sf::VideoMode mode, const sf::String& title, uint32_t style, const sf::ContextSettings& settings)
: sf::RenderWindow(mode, title, style, settings)
{
}

std::unique_ptr<tc::RenderWindow> tc::RenderWindow::Factory(sf::VideoMode mode, const sf::String& title, uint32_t style, const sf::ContextSettings& settings)
{
    std::unique_ptr<tc::RenderWindow> rW(new tc::RenderWindow(mode, title, style, settings));
    return rW;
}
