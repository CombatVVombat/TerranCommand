#include "engine/render/display.hpp"

Display::Display()
{
    fullscreen = false;
    supportedVideoModes = sf::VideoMode::getFullscreenModes();
}

