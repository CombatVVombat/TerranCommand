#include "systems/graphics/graphics.hpp"

tc::sys::Graphics::Graphics(std::unique_ptr<tc::IRenderer> r)
:
    renderer(std::move(r))
{
    textureCache.LoadFromFile("./resources/texture/background/bg0.jpg");
    for(int i = 0; i < 10; i ++)
    {
        std::string path = "./resources/texture/tile/tile";
        path += (i+48);
        path += ".png";
        textureCache.LoadFromFile(path);
    }
}

void tc::sys::Graphics::Update()
{
    //Render();
    //Display();
}

void tc::sys::Graphics::Display(sf::RenderWindow &rW) const
{
    rW.display();
}

void tc::sys::Graphics::Render(sf::RenderTarget &rT) const
{
    renderer->Render(opaque, rT);
    renderer->Render(translucent, rT);


    ////////////////////////////////////////////////////////////////
    /////////////////////// testing code ///////////////////////////
    ////////////////////////////////////////////////////////////////
    sf::Sprite bort;
    sf::Sprite nort[9];
    bort.setTexture(textureCache.Get(0));
    rT.draw(bort);

    for(int i = 0; i < 9; ++i)
    {
        nort[i].setPosition(sf::Vector2f((i*75)+100, 250));
        nort[i].setTexture(textureCache.Get(i+2));
        rT.draw(nort[i]);
    }
    //////////////////////////////////////////////////////////////

}
