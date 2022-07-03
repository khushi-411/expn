#include <iostream>
#include <math.h>

#include "gtest/gtest.h"
#include "expn.h"


TEST(expnTest, test1) {
    EXPECT_EQ (expn(11, 4), 0.00128137);
}


TEST(expnTest, test2) {
    EXPECT_EQ (expn(-1, 1), std::abs(0/0.0)); // returns nan
}


TEST(expnTest, test3) {
    EXPECT_EQ (expn(1, 0), 1./0.);
}


TEST(expnTest, test4) {
    EXPECT_EQ (expn(0, 2), 0.0676676);
}


TEST(expnTest, test5) {
    double k[] = {1, 2, 3, 4};
    EXPECT_EQ (expn(10, *k), 0.036394);
}


TEST(expnTest, test6) {
    double k[] = {1, 2, 3, 4};
    int a[] = {13, 12, 4, 4};
    EXPECT_EQ (expn(*k, *a), 1.62187e-07);
}
