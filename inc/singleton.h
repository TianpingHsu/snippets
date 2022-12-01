#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__

#include "noncopyable.h"

namespace Snippets {
    class Singleton: public NonCopyable {
        public:
            static Singleton& getInstance() {
                static Singleton instance;
                return instance;
            }
        private:
            Singleton() {}
    };
}

#endif
