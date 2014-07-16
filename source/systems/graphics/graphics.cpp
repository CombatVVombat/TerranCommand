#include "systems/graphics/graphics.hpp"

tc::sys::Graphics::Graphics(std::unique_ptr<tc::IRenderer> r)
:
    renderer(std::move(r))
{
    ///////// TEMPORARY texture loading area ////////////////////////////////////////////
    textureCache.LoadFromFile("./resources/texture/background/bg0.jpg");
    for(int i = 0; i < 10; i ++)
    {
        std::string path = "./resources/texture/tile/tile";
        path += (i+48);
        path += ".png";
        textureCache.LoadFromFile(path);
    }
    //////////////////////////////////////////////////////////////////////////////////////

    //////// TEMPORARY add some things to the allDrawables vector ////////////////////////
    std::unique_ptr<tc::Sprite> background(new tc::Sprite);
    background->material.SetTexture( textureCache.Get(0) );
    allDrawables.push_back( std::move (background) );
    /*for(int i = 0; i < 9; ++i)
    {
        std::unique_ptr<tc::Sprite> gort(new tc::Sprite);
        gort->sprite.setPosition(sf::Vector2f((i*75)+100, 250));
        gort->sprite.setTexture(textureCache.Get(i+2));
        allDrawables.push_back( std::move(gort) );
    }*/
    //////////////////////////////////////////////////////////////////////////////////////
}

void tc::sys::Graphics::Display(sf::RenderWindow &rW) const
{
    rW.display();
}

void tc::sys::Graphics::Draw(sf::RenderTarget &rT)
{
    opaque.Sort();
    translucent.Sort();

    renderer->Draw(opaque, allDrawables, rT);
    renderer->Draw(translucent, allDrawables, rT);
}
