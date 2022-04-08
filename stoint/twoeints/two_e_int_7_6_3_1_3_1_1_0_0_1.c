#include <tgmath.h>

double two_e_int_7_6_3_1_3_1_1_0_0_1(double z12, double z34) {
  return (-768 * sqrt(6) *
          (486 * pow(z12, 7) + 5832 * pow(z12, 6) * z34 + 25201 * pow(z12, 5) * pow(z34, 2) +
           24420 * pow(z12, 4) * pow(z34, 3) + 32520 * pow(z12, 3) * pow(z34, 4) + 13006 * pow(z12, 2) * pow(z34, 5) +
           2592 * z12 * pow(z34, 6) + 216 * pow(z34, 7))) /
         (5. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}