#include "stoint/auxiliary.h"
#include <iostream>
#include <gtest/gtest.h>
#include <cmath>

#define EXPECT_RELNEAR(A, B, reltol) EXPECT_NEAR(A, B, std::abs((B)*(reltol)))


using std::sqrt;
using std::pow;

TEST(NormCoefTest, SanityCheck)
{
  EXPECT_DOUBLE_EQ(NormCoef<2>(0.5), 0.2041241452319315);
}

TEST(QNormCoefTest, CheckVals)
{
  EXPECT_DOUBLE_EQ( (QNormCoef<2,2,4,4>(0.5,0.5,0.3,0.3)), 1.0414285714285717E-8 );
}

TEST(OneCenterOverlapTest, CheckVals)
{
  EXPECT_RELNEAR( (OneCenterOverlap<2,3>(0.5,1.0)), 512.0/729.0 * sqrt(5.0/3.0), 1e-14);
  EXPECT_RELNEAR( (OneCenterOverlap<1,1>(4.0,6.0)), (48*sqrt(6))/125., 1e-14);
  EXPECT_RELNEAR( (OneCenterOverlap<10,12>(0.34,0.63)), 0.57753320411680154979, 1e-14);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
