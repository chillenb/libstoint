#include <tgmath.h>

double two_e_int_8_4_3_3_1_1_0_0_11_11(double z12, double z34) {
  return (1152 *
          (210 * pow(z12, 10) + 2310 * pow(z12, 9) * z34 + 11382 * pow(z12, 8) * pow(z34, 2) +
           32802 * pow(z12, 7) * pow(z34, 3) + 47190 * pow(z12, 6) * pow(z34, 4) + 47850 * pow(z12, 5) * pow(z34, 5) +
           34430 * pow(z12, 4) * pow(z34, 6) + 17281 * pow(z12, 3) * pow(z34, 7) + 5771 * pow(z12, 2) * pow(z34, 8) +
           1155 * z12 * pow(z34, 9) + 105 * pow(z34, 10))) /
         (pow(z12, 8) * pow(z34, 4) * pow(z12 + z34, 11));
}