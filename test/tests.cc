#include "stoint/auxiliary.h"
#include <iostream>
#include <gtest/gtest.h>


TEST(NormCoefTest, CheckWorking)
{
  EXPECT_DOUBLE_EQ(NormCoef<2>(0.5), 0.2041241452319315);
}

TEST(QNormCoefTest, CheckTwo)
{
  EXPECT_DOUBLE_EQ( (QNormCoef<2,2,4,4>(0.5,0.5,0.3,0.3)), 1.0414285714285717E-8 );
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
