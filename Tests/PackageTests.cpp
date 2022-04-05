#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Package.h"

using testing::Eq;

TEST(test1, getPackageNumber){
    Package p1(0, 10, 5, true, 2);
    Package p2(2, 5, 10, false, 50);

    EXPECT_EQ(0, p1.getPackageNumber());
    EXPECT_EQ(2, p2.getPackageNumber());
}

TEST(test1, getWeight){
    Package p1(0, 10, 5, true, 2);
    Package p2(2, 5, 10, false, 50);

    EXPECT_EQ(10, p1.getWeight());
    EXPECT_EQ(5, p2.getWeight());
}