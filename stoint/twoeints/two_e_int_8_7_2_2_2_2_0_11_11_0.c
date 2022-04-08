#include <tgmath.h>

double two_e_int_8_7_2_2_2_2_0_11_11_0(double z12, double z34) {
  return (2073600 * (6 * pow(z12, 9) + 84 * pow(z12, 8) * z34 + 766 * pow(z12, 7) * pow(z34, 2) +
                     5264 * pow(z12, 6) * pow(z34, 3) + 26026 * pow(z12, 5) * pow(z34, 4) +
                     8008 * pow(z12, 4) * pow(z34, 5) + 1862 * pow(z12, 3) * pow(z34, 6) +
                     328 * pow(z12, 2) * pow(z34, 7) + 42 * z12 * pow(z34, 8) + 3 * pow(z34, 9))) /
         (7. * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}