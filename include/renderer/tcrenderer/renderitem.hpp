#ifndef RENDERITEM_HPP_INCLUDED
#define RENDERITEM_HPP_INCLUDED

#include <memory>
#include <SFML/Graphics.hpp>
#include "renderer/tcrenderer/sortkey.hpp"

namespace tc
{
    class RenderItem
    {
    public:
        RenderItem(std::shared_ptr<sf::Drawable> d, std::shared_ptr<sf::RenderStates> rS);
        bool operator < (const RenderItem &rhs) const;

    private:
        tc::SortKey sortKey;
        std::shared_ptr<sf::Drawable> drawable;
        std::shared_ptr<sf::RenderStates> renderState;
    };
}

#endif // RENDERITEM_HPP_INCLUDED
