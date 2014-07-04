#ifndef RENDERQUEUE_HPP_INCLUDED
#define RENDERQUEUE_HPP_INCLUDED

#include "renderer/tcrenderer/renderitem.hpp"

namespace tc
{
    class RenderQueue : public tc::IRenderQueue
    {
    private:
        std::vector<tc::RenderItem> renderItems;
    };
}

#endif // RENDERQUEUE_HPP_INCLUDED
