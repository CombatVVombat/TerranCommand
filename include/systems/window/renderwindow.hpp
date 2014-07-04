#ifndef RENDERWINDOW_HPP_INCLUDED
#define RENDERWINDOW_HPP_INCLUDED

#include <memory>
#include <SFML/Graphics/Export.hpp>
#include <SFML/Graphics.hpp>

namespace tc
{
    class RenderWindow : public sf::RenderWindow
    {
    public:
        RenderWindow(sf::VideoMode mode, const sf::String& title, uint32_t style = sf::Style::Default, const sf::ContextSettings& settings = sf::ContextSettings());
        static std::unique_ptr<tc::RenderWindow> Factory(sf::VideoMode mode, const sf::String& title, uint32_t style = sf::Style::Default, const sf::ContextSettings& settings = sf::ContextSettings());
    };
}



#endif // RENDERWINDOW_HPP_INCLUDED
