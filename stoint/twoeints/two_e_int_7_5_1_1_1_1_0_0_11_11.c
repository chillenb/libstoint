#include <tgmath.h>

double two_e_int_7_5_1_1_1_1_0_0_11_11(double z12, double z34) {
  return (3456 *
          (175 * pow(z12, 10) + 1925 * pow(z12, 9) * z34 + 9541 * pow(z12, 8) * pow(z34, 2) +
           27951 * pow(z12, 7) * pow(z34, 3) + 53130 * pow(z12, 6) * pow(z34, 4) + 55440 * pow(z12, 5) * pow(z34, 5) +
           40480 * pow(z12, 4) * pow(z34, 6) + 20471 * pow(z12, 3) * pow(z34, 7) + 6861 * pow(z12, 2) * pow(z34, 8) +
           1375 * z12 * pow(z34, 9) + 125 * pow(z34, 10))) /
         (5. * pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 11));
}