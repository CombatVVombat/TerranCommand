#ifndef QUEUEITEM_HPP_INCLUDED
#define QUEUEITEM_HPP_INCLUDED

#include <stdint.h>
#include "systems/graphics/renderer/tcrenderer/sortKey.hpp"

namespace tc
{
    typedef uint16_t indexType;

    class QueueItem
    {
    public:
      sortKeyType sortKey;
      indexType index;

      bool operator < (const tc::QueueItem &rhs) const;
    };
}



#endif // QUEUEITEM_HPP_INCLUDED
