#include <tgmath.h>

double two_e_int_6_5_3_0_2_1_1_0_0_1(double z12, double z34) {
  return (3456 * sqrt(1.4285714285714286) *
          (9 * pow(z12, 3) + 90 * pow(z12, 2) * z34 + 20 * z12 * pow(z34, 2) + 2 * pow(z34, 3))) /
         (pow(z12, 3) * pow(z34, 2) * pow(z12 + z34, 10));
}