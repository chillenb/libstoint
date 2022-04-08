#include <tgmath.h>

double two_e_int_5_5_2_1_2_1_2_1_22_11(double z12, double z34) {
  return (-1728 * (7 * pow(z12, 6) + 63 * pow(z12, 5) * z34 + 254 * pow(z12, 4) * pow(z34, 2) +
                   606 * pow(z12, 3) * pow(z34, 3) + 254 * pow(z12, 2) * pow(z34, 4) + 63 * z12 * pow(z34, 5) +
                   7 * pow(z34, 6))) /
         (7. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 9));
}