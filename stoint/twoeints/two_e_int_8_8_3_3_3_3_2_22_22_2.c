#include <tgmath.h>

double two_e_int_8_8_3_3_3_3_2_22_22_2(double z12, double z34) {
  return (2032128000 * (13 * pow(z12, 6) + 195 * pow(z12, 5) * z34 + 1785 * pow(z12, 4) * pow(z34, 2) +
                        12215 * pow(z12, 3) * pow(z34, 3) + 1785 * pow(z12, 2) * pow(z34, 4) + 195 * z12 * pow(z34, 5) +
                        13 * pow(z34, 6))) /
         (143. * pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 15));
}