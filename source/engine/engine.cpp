#include "engine/engine.hpp"

tc::Engine::Engine(std::unique_ptr<tc::sys::Window> wS, std::unique_ptr<tc::sys::Graphics> gS)
:
    windowSystem(std::move(wS)),
    graphicsSystem(std::move(gS))
{
}

void tc::Engine::DoSomeTemporaryShit()
{
    graphicsSystem->Draw(windowSystem->GetWindow());      // draws to the target
    graphicsSystem->Display(windowSystem->GetWindow());     // displays what was drawn
    windowSystem->Update();
}
