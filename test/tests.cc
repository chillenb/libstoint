#include "stoint.h"
#include "stoint/auxiliary.h"
#include "stoint/twoehelper/util.h"

#include <array>
#include <cmath>
#include <gtest/gtest.h>
#include <iostream>

#define EXPECT_RELNEAR(A, B, reltol) EXPECT_NEAR((A), (B), std::abs((B) * (reltol)))
#define CLOSE_ENOUGH(A, B) EXPECT_NEAR((A), (B), std::abs(B) * 1E-14)

using std::pow;
using std::sqrt;

TEST(lcoef1, CrashAndBurn) {
  CLOSE_ENOUGH((lcoef1(5,1,2,3,4)), 72./sqrt(M_PI));
  CLOSE_ENOUGH((lcoef1(1,3,5,3,5)), sqrt(M_PI)/8.);
}

TEST(lcoef2, CrashAndBurn) {
  CLOSE_ENOUGH( (lcoef2(3,3,4)), sqrt(sqrt(M_PI) / 77.));
}

TEST(lcoef, CrashAndBurn) {
  CLOSE_ENOUGH((lcoef(3,3,4,3,6)), -10./77. * sqrt(2./39.));
}

TEST(gammas, CrashAndBurn) {
  CLOSE_ENOUGH((half_recip_gamma(3)), 2./sqrt(M_PI));
  CLOSE_ENOUGH((half_recip_gamma(-3)), 3./(4*sqrt(M_PI)));
  CLOSE_ENOUGH((half_gamma(-3)), (4*sqrt(M_PI))/3. );
  CLOSE_ENOUGH((half_gamma(3)), sqrt(M_PI)/2. );
}




TEST(NormCoefTest, CrashAndBurn) { CLOSE_ENOUGH(NormCoef(2, 0.5), 0.2041241452319315); }

TEST(QNormCoefTest, CrashAndBurn) { CLOSE_ENOUGH((QNormCoef(2, 2, 4, 4, 0.5, 0.5, 0.3, 0.3)), 1.0414285714285717E-8); }

TEST(OneCenterOverlapTest, CrashAndBurn) {
  CLOSE_ENOUGH((OneCenterOverlap(2, 3, 0.5, 1.0)), 512.0 / 729.0 * sqrt(5.0 / 3.0));
  CLOSE_ENOUGH((OneCenterOverlap(1, 1, 4.0, 6.0)), (48 * sqrt(6)) / 125.);
  CLOSE_ENOUGH((OneCenterOverlap(10, 12, 0.34, 0.63)), 0.57753320411680154979);
}

// H atom nuclear attraction is -1 hartree
TEST(OneCenterNuclearAttraction, CrashAndBurn) { CLOSE_ENOUGH((OneCenterNuclearAttraction(1, 1, 1, 1, 1)), -1.); }

// H atom KE is 0.5 hartree
TEST(OneCenterKineticEnergy, CrashAndBurn) { CLOSE_ENOUGH((OneCenterKineticEnergy(1, 1, 1, 1, 0)), 0.5); }

TEST(OneCenterERI, CrashAndBurn) {
  two_int_init();
  CLOSE_ENOUGH(two_e_int({1, 0, 0, 1., 1, 0, 0, 1., 1, 0, 0, 1., 1, 0, 0, 1.}), 5. / 8.)
      << "(1s 1s | 1s 1s) didn't work";
  CLOSE_ENOUGH(two_e_int({4, 3, 2, 1., 4, 3, 2, 1., 4, 2, 0, 1., 4, 2, 0, 1.}), 0.1963468279157366)
      << "(4f 4f | 4d 4d) didn't work";
  CLOSE_ENOUGH(two_e_int({1, 0, 0, 1., 2, 1, 0, 1., 3, 2, 2, 1., 4, 3, 2, 1.}), 0.02604299528923668)
      << "(1s 2p | 3d 4f) didn't work";
}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
