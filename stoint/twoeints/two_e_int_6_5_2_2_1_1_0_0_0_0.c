#include <tgmath.h>

double two_e_int_6_5_2_2_1_1_0_0_0_0(double z12, double z34) {
  return (576 * (30 * pow(z12, 9) + 300 * pow(z12, 8) * z34 + 1366 * pow(z12, 7) * pow(z34, 2) +
                 3760 * pow(z12, 6) * pow(z34, 3) + 7020 * pow(z12, 5) * pow(z34, 4) +
                 5520 * pow(z12, 4) * pow(z34, 5) + 3060 * pow(z12, 3) * pow(z34, 6) +
                 1131 * pow(z12, 2) * pow(z34, 7) + 250 * z12 * pow(z34, 8) + 25 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 10));
}