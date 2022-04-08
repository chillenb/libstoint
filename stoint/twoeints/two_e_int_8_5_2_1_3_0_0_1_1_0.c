#include <tgmath.h>

double two_e_int_8_5_2_1_3_0_0_1_1_0(double z12, double z34) {
  return (20736 * sqrt(1.4285714285714286) *
          (165 * pow(z12, 5) + 1980 * pow(z12, 4) * z34 + 880 * pow(z12, 3) * pow(z34, 2) +
           264 * pow(z12, 2) * pow(z34, 3) + 48 * z12 * pow(z34, 4) + 4 * pow(z34, 5))) /
         (pow(z12, 5) * pow(z34, 2) * pow(z12 + z34, 12));
}