#include <tgmath.h>

double two_e_int_7_4_3_2_1_0_1_1_0_0(double z12, double z34) {
  return (384 * sqrt(4.285714285714286) *
          (28 * pow(z12, 7) + 280 * pow(z12, 6) * z34 + 1260 * pow(z12, 5) * pow(z34, 2) +
           1050 * pow(z12, 4) * pow(z34, 3) + 600 * pow(z12, 3) * pow(z34, 4) + 225 * pow(z12, 2) * pow(z34, 5) +
           50 * z12 * pow(z34, 6) + 5 * pow(z34, 7))) /
         (pow(z12, 6) * pow(z34, 3) * pow(z12 + z34, 10));
}