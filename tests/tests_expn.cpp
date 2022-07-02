#include "gtest/gtest.h"
#include "expn.h"


TEST(expnTest, test1) {
    EXPECT_EQ (expn(-1, 1), std::nan);
}
