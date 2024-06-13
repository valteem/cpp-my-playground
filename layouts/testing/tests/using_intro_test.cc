#include "gtest/gtest.h"

#include "using_intro.h"

namespace usingIntro {

    TEST(using_intro, using_into) {
            B* b = new B(1,2);
            EXPECT_EQ(b->x, 1);
            EXPECT_EQ(b->y, 2);
    };

}