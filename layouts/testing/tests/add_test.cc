#include "gtest/gtest.h"

#include "add.h"
#include "base.h"

TEST(add_test, base) {
    Transform t(3);
    GTEST_ASSERT_EQ(t.e->get_dim(), 3);
};

TEST(add_test, add) {
    GTEST_ASSERT_EQ(testing::add(1, 1), 2);
};