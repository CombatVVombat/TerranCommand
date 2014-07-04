#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include <memory>
#include "systems/graphics/graphics.hpp"
#include "systems/window/window.hpp"
#include "renderer/abstract/Irenderer.hpp"
#include "eventhandler/abstract/Ieventhandler.hpp"
#include "game/world.hpp"

namespace tc
{
    class Engine
    {
    private:
        std::unique_ptr<tc::sys::Window> windowSystem;
        std::unique_ptr<tc::sys::Graphics> graphicsSystem;

    public:
        Engine(std::unique_ptr<tc::sys::Window> wS, std::unique_ptr<tc::sys::Graphics> gS);
        void DoSomeTemporaryShit();
    };
}



#endif // ENGINE_H_INCLUDED
