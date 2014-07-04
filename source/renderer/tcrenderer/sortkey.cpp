#include "renderer/tcrenderer/sortkey.hpp"

bool tc::SortKey::operator < (const SortKey &rhs) const
{
    return (this->value < rhs.value);
}
