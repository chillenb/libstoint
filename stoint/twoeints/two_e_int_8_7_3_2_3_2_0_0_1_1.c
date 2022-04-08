#include <tgmath.h>

double two_e_int_8_7_3_2_3_2_0_0_1_1(double z12, double z34) {
  return (276480 * sqrt(2) *
          (297 * pow(z12, 11) + 4158 * pow(z12, 10) * z34 + 27148 * pow(z12, 9) * pow(z34, 2) +
           109802 * pow(z12, 8) * pow(z34, 3) + 300183 * pow(z12, 7) * pow(z34, 4) +
           524888 * pow(z12, 6) * pow(z34, 5) + 394912 * pow(z12, 5) * pow(z34, 6) +
           200952 * pow(z12, 4) * pow(z34, 7) + 72688 * pow(z12, 3) * pow(z34, 8) + 18062 * pow(z12, 2) * pow(z34, 9) +
           2772 * z12 * pow(z34, 10) + 198 * pow(z34, 11))) /
         (11. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}