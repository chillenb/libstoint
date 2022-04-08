#include <tgmath.h>

double two_e_int_8_5_2_1_2_1_1_0_22_11(double z12, double z34) {
  return (-20736 * sqrt(2) *
          (147 * pow(z12, 9) + 1764 * pow(z12, 8) * z34 + 9372 * pow(z12, 7) * pow(z34, 2) +
           28380 * pow(z12, 6) * pow(z34, 3) + 25960 * pow(z12, 5) * pow(z34, 4) + 16797 * pow(z12, 4) * pow(z34, 5) +
           7604 * pow(z12, 3) * pow(z34, 6) + 2302 * pow(z12, 2) * pow(z34, 7) + 420 * z12 * pow(z34, 8) +
           35 * pow(z34, 9))) /
         (7. * pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 12));
}