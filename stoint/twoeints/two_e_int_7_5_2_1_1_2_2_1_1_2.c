#include <tgmath.h>

double two_e_int_7_5_2_1_1_2_2_1_1_2(double z12, double z34) {
  return (6912 *
          (98 * pow(z12, 8) + 1078 * pow(z12, 7) * z34 + 5435 * pow(z12, 6) * pow(z34, 2) +
           16665 * pow(z12, 5) * pow(z34, 3) + 11715 * pow(z12, 4) * pow(z34, 4) + 5808 * pow(z12, 3) * pow(z34, 5) +
           1928 * pow(z12, 2) * pow(z34, 6) + 385 * z12 * pow(z34, 7) + 35 * pow(z34, 8))) /
         (7. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}