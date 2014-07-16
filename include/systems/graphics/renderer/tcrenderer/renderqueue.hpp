#ifndef RENDERQUEUE_HPP_INCLUDED
#define RENDERQUEUE_HPP_INCLUDED

#include <algorithm>
#include "systems/graphics/renderer/tcrenderer/queueItem.hpp"
#include "systems/graphics/renderer/abstract/IrenderQueue.hpp"

namespace tc
{
    class RenderQueue : public tc::IRenderQueue
    {
    public:
        void Sort();

    private:
        std::vector<tc::QueueItem> renderItems;
    };
}

#endif // RENDERQUEUE_HPP_INCLUDED
