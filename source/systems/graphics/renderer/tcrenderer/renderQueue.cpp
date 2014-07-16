#include "systems/graphics/renderer/tcrenderer/renderqueue.hpp"

void tc::RenderQueue::Sort()
{
    std::sort(renderItems.begin(), renderItems.end());
}
