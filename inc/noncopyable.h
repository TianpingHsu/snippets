#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__

namespace Snippets {
    class NonCopyable {
        public:
        NonCopyable & operator=(const NonCopyable&) = delete;
        NonCopyable(const NonCopyable&) = delete;
        NonCopyable() = default;
    };
}

#endif
