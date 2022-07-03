#include <iostream>
#include <math.h>

#include "gtest/gtest.h"
#include "expn.h"


#define IS_NAN(x) (((x) < 0) == ((x) >= 0))


TEST(expnTest, test1) {
    EXPECT_NEAR (expn(11, 4), 0.00128137, 0.0000001);
}


TEST(expnTest, test2) {
    ASSERT_TRUE (IS_NAN(expn(-1, 1)));
}


TEST(expnTest, test3) {
    EXPECT_EQ (expn(1, 0), 1./0.);
}


TEST(expnTest, test4) {
    EXPECT_NEAR (expn(0, 2), 0.0676676, 0.0000001);
}


TEST(expnTest, test5) {
    double k[] = {1, 2, 3, 4};
    EXPECT_NEAR (expn(10, *k), 0.036394, 0.0000001);
}


TEST(expnTest, test6) {
    double k[] = {1, 2, 3, 4};
    int a[] = {13, 12, 4, 4};
    EXPECT_NEAR (expn(*k, *a), 1.62187e-07, 0.0000001);
}
