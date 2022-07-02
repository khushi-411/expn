#include "gtest/gtest.h"
#include "example.h"

TEST(exampleTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (example::x (0),  0);
    EXPECT_EQ (example::x (10), 20);
    EXPECT_EQ (example::x (50), 100);
}
