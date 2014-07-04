#include "renderer/tcrenderer/renderitem.hpp"

tc::RenderItem::RenderItem(std::shared_ptr<sf::Drawable> d, std::shared_ptr<sf::RenderStates> rS)
:
    drawable(d),
    renderState(rS)
{
    // build the sortkey


}

bool tc::RenderItem::operator < (const RenderItem &rhs) const
{
    return(this->sortKey < rhs.sortKey);
}
