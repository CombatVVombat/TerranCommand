#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

#include <SFML/Graphics.hpp>


//////////////// NOT USED FOR ANYTHING AS OF 6/30/14 ///////////////
class Display
{
private:
    std::vector<sf::VideoMode> supportedVideoModes;
    bool fullscreen;

public:
    Display();
};



#endif // DISPLAY_H_INCLUDED
