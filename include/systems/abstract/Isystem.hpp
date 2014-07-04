#ifndef ISYSTEM_HPP_INCLUDED
#define ISYSTEM_HPP_INCLUDED

namespace tc
{
    namespace sys
    {
        class ISystem : sf::NonCopyable
        {
            virtual void Update() = 0;
        };
    }
}



#endif // ISYSTEM_HPP_INCLUDED
