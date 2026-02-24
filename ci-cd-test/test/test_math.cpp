#include <gtest/gtest.h>
#include "math_utils.h"

TEST(MathTest, Add)
{
    EXPECT_EQ(add(2, 3), 5);
}

TEST(MathTest, Multiply)
{
    EXPECT_EQ(multiply(4, 5), 20);
}