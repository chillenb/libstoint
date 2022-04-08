#include <tgmath.h>

double two_e_int_7_7_3_1_1_3_3_0_0_3(double z12, double z34) {
  return (2956800 * (pow(z12, 4) + 13 * pow(z12, 3) * z34 + 78 * pow(z12, 2) * pow(z34, 2) + 13 * z12 * pow(z34, 3) +
                     pow(z34, 4))) /
         (pow(z12, 3) * pow(z34, 3) * pow(z12 + z34, 13));
}