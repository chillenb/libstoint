#include <tgmath.h>

double two_e_int_8_8_3_3_3_3_2_11_22_1(double z12, double z34) {
  return (-406425600 * (13 * pow(z12, 6) + 195 * pow(z12, 5) * z34 + 2940 * pow(z12, 4) * pow(z34, 2) +
                        29540 * pow(z12, 3) * pow(z34, 3) + 2940 * pow(z12, 2) * pow(z34, 4) + 195 * z12 * pow(z34, 5) +
                        13 * pow(z34, 6))) /
         (143. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 15));
}