#ifndef SORTKEY_HPP_INCLUDED
#define SORTKEY_HPP_INCLUDED

#include <stdint.h>

namespace tc
{
    class SortKey
    {
    public:
        bool operator < (const SortKey &rhs) const;

    private:
        uint64_t value;
    };
}

#endif // SORTKEY_HPP_INCLUDED
