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

TEST(test1, getVoloume){
    Package p1(0, 10, 5, true, 2);
    Package p2(2, 5, 10, false, 50);

    EXPECT_EQ(5, p1.getVolume());
    EXPECT_EQ(10, p2.getVolume());
}

TEST(test1, getPriority){
    Package p1(0, 10, 5, true, 2);
    Package p2(2, 5, 10, false, 50);

    EXPECT_EQ(true, p1.getPriority());
    EXPECT_EQ(false, p2.getPriority());
}

