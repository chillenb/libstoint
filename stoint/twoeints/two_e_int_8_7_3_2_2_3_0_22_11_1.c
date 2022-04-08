#include <tgmath.h>

double two_e_int_8_7_3_2_2_3_0_22_11_1(double z12, double z34) {
  return (691200 * sqrt(3) *
          (121 * pow(z12, 7) + 1694 * pow(z12, 6) * z34 + 8736 * pow(z12, 5) * pow(z34, 2) +
           12194 * pow(z12, 4) * pow(z34, 3) + 11116 * pow(z12, 3) * pow(z34, 4) + 3654 * pow(z12, 2) * pow(z34, 5) +
           616 * z12 * pow(z34, 6) + 44 * pow(z34, 7))) /
         (11. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 14));
}