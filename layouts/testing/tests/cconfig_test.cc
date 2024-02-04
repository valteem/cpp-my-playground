#include "gtest/gtest.h"

#include "cconfig.h"

TEST(cconfig_test, cconfig) {
    cconfig::CustomConfig ccn = cconfig::CustomConfig();
    GTEST_ASSERT_EQ(ccn.GetCustomConfig(), "Namespace configuration");
    ::CustomConfig ccg = ::CustomConfig();
    GTEST_ASSERT_EQ(ccg.GetCustomConfig(), "Global configuration");
};