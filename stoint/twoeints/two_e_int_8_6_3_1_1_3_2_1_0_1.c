#include <tgmath.h>

double two_e_int_8_6_3_1_1_3_2_1_0_1(double z12, double z34) {
  return (13824 * sqrt(5) *
          (108 * pow(z12, 8) + 1404 * pow(z12, 7) * z34 + 7874 * pow(z12, 6) * pow(z34, 2) +
           23738 * pow(z12, 5) * pow(z34, 3) + 15210 * pow(z12, 4) * pow(z34, 4) + 6539 * pow(z12, 3) * pow(z34, 5) +
           1847 * pow(z12, 2) * pow(z34, 6) + 312 * z12 * pow(z34, 7) + 24 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}