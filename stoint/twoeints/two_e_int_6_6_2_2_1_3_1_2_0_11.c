#include <tgmath.h>

double two_e_int_6_6_2_2_1_3_1_2_0_11(double z12, double z34) {
  return (-2304 * (36 * pow(z12, 6) + 396 * pow(z12, 5) * z34 + 1855 * pow(z12, 4) * pow(z34, 2) +
                   4565 * pow(z12, 3) * pow(z34, 3) + 1855 * pow(z12, 2) * pow(z34, 4) + 396 * z12 * pow(z34, 5) +
                   36 * pow(z34, 6))) /
         (sqrt(7) * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}