#ifndef IRENDERQUEUE_HPP_INCLUDED
#define IRENDERQUEUE_HPP_INCLUDED

#include <SFML/System.hpp>

namespace tc
{
    class IRenderQueue : sf::NonCopyable
    {
    protected:
        IRenderQueue() {}

    public:
        virtual void Sort() = 0;
    };
}

#endif // IRENDERQUEUE_HPP_INCLUDED
