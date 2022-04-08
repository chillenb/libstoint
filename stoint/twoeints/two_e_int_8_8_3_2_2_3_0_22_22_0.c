#include <tgmath.h>

double two_e_int_8_8_3_2_2_3_0_22_22_0(double z12, double z34) {
  return (1382400 * (484 * pow(z12, 8) + 7260 * pow(z12, 7) * z34 + 53095 * pow(z12, 6) * pow(z34, 2) +
                     254345 * pow(z12, 5) * pow(z34, 3) + 899535 * pow(z12, 4) * pow(z34, 4) +
                     254345 * pow(z12, 3) * pow(z34, 5) + 53095 * pow(z12, 2) * pow(z34, 6) + 7260 * z12 * pow(z34, 7) +
                     484 * pow(z34, 8))) /
         (11. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 15));
}