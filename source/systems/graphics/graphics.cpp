#include "systems/graphics/graphics.hpp"

tc::sys::Graphics::Graphics(std::unique_ptr<tc::IRenderer> r)
:
    renderer(std::move(r))
{
}

void tc::sys::Graphics::Update()
{
    //Render();
    //Display();
}

void tc::sys::Graphics::Display(sf::RenderWindow &rW)
{
    rW.display();
}

void tc::sys::Graphics::Render(sf::RenderTarget &rT)
{
    renderer->Render(opaque, rT);
    renderer->Render(translucent, rT);
}
