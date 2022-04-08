#include <tgmath.h>

double two_e_int_7_7_3_2_3_2_3_1_33_11(double z12, double z34) {
  return (1728000 * (11 * pow(z12, 6) + 143 * pow(z12, 5) * z34 + 872 * pow(z12, 4) * pow(z34, 2) +
                     3328 * pow(z12, 3) * pow(z34, 3) + 872 * pow(z12, 2) * pow(z34, 4) + 143 * z12 * pow(z34, 5) +
                     11 * pow(z34, 6))) /
         (11. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 13));
}