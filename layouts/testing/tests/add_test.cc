#include "gtest/gtest.h"

#include "add.h"
#include "base.h"

TEST(add_test, add) {
    GTEST_ASSERT_EQ(testing::add(1, 1), 2);
}