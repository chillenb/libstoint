#include "stoint/auxiliary.h"
#include "stoint.h"
#include "stoint/twoeints/util.h"

#include <iostream>
#include <gtest/gtest.h>
#include <cmath>
#include <array>


#define EXPECT_RELNEAR(A, B, reltol) EXPECT_NEAR( (A), (B), std::abs((B)*(reltol)))
#define CLOSE_ENOUGH(A, B) EXPECT_NEAR((A), (B), std::abs(B)*1E-14)


using std::sqrt;
using std::pow;

TEST(NormCoefTest, SanityCheck)
{
  CLOSE_ENOUGH(NormCoef(2,0.5), 0.2041241452319315);
}

TEST(QNormCoefTest, CheckVals)
{
  CLOSE_ENOUGH( (QNormCoef(2,2,4,4,0.5,0.5,0.3,0.3)), 1.0414285714285717E-8 );
}

TEST(OneCenterOverlapTest, CheckVals)
{
  CLOSE_ENOUGH( (OneCenterOverlap(2,3,0.5,1.0)), 512.0/729.0 * sqrt(5.0/3.0));
  CLOSE_ENOUGH( (OneCenterOverlap(1,1,4.0,6.0)), (48*sqrt(6))/125.);
  CLOSE_ENOUGH( (OneCenterOverlap(10,12,0.34,0.63)), 0.57753320411680154979);
}

// H atom nuclear attraction is -1 hartree
TEST(OneCenterNuclearAttraction, CheckVals)
{
  CLOSE_ENOUGH( (OneCenterNuclearAttraction(1, 1, 1, 1, 1)), -1.);
}

// H atom KE is 0.5 hartree
TEST(OneCenterKineticEnergy, CheckVals)
{
  CLOSE_ENOUGH( (OneCenterKineticEnergy(1, 1, 1, 1, 0)), 0.5);
}

TEST(TwoEInt, Sanity)
{
  two_int_init();
  CLOSE_ENOUGH(two_e_int({1,0,0,1., 1,0,0,1., 1,0,0,1., 1,0,0,1.}), 5./8.);  // 1H (ss|ss)
  CLOSE_ENOUGH(two_e_int({4,3,2,1., 4,3,2,1., 4,2,0,1., 4,2,0,1.}), 0.1963468279157366); // (ff|dd)
  CLOSE_ENOUGH(two_e_int({1,0,0,1., 2,1,0,1., 3,2,2,1., 4,3,2,1.}), 0.02604299528923668);// (sp|df)
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
