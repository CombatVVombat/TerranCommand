#include "systems/graphics/renderer/tcrenderer/queueItem.hpp"

bool tc::QueueItem::operator < (const tc::QueueItem &rhs) const
{
    return (this->sortKey < rhs.sortKey);
}
