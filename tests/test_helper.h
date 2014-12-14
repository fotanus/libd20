#include<iostream>
#define ASSERT(pred) { \
        if(!(pred)) { \
                    std::cerr << "Assert failed: " << __FILE__ << ":"<< __LINE__ << std::endl; \
                    return -1; \
                } \
}

