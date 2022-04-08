#include <tgmath.h>

double two_e_int_8_6_2_1_1_2_0_1_11_22(double z12, double z34) {
  return (6912 * sqrt(6) *
          (588 * pow(z12, 10) + 7644 * pow(z12, 9) * z34 + 46854 * pow(z12, 8) * pow(z34, 2) +
           181038 * pow(z12, 7) * pow(z34, 3) + 497640 * pow(z12, 6) * pow(z34, 4) +
           346203 * pow(z12, 5) * pow(z34, 5) + 183599 * pow(z12, 4) * pow(z34, 6) + 71474 * pow(z12, 3) * pow(z34, 7) +
           19218 * pow(z12, 2) * pow(z34, 8) + 3185 * z12 * pow(z34, 9) + 245 * pow(z34, 10))) /
         (7. * pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 13));
}