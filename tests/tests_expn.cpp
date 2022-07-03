#include "gtest/gtest.h"
#include "expn.h"


TEST(expnTest, test1) {
    EXPECT_EQ (expn(11, 4), 0.00128137);
}

TEST(expnTest, test2) {
    EXPECT_EQ (expn(1, 0), inf);
}
