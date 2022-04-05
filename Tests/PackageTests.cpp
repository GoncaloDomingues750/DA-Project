#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Package.h"

using testing::Eq;

TEST(test1, getPackageNumber){
    Package p1(0, 10, true, 2);
    Package p2(2, 5, false, 50);

    EXPECT_EQ(0, p1.getPackageNumber());
    EXPECT_EQ(2, p2.getPackageNumber());
}