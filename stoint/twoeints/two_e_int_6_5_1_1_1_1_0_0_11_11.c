#include <tgmath.h>

double two_e_int_6_5_1_1_1_1_0_0_11_11(double z12, double z34) {
  return (576 * (150 * pow(z12, 9) + 1500 * pow(z12, 8) * z34 + 6694 * pow(z12, 7) * pow(z34, 2) +
                 17440 * pow(z12, 6) * pow(z34, 3) + 28980 * pow(z12, 5) * pow(z34, 4) +
                 25305 * pow(z12, 4) * pow(z34, 5) + 14790 * pow(z12, 3) * pow(z34, 6) +
                 5604 * pow(z12, 2) * pow(z34, 7) + 1250 * z12 * pow(z34, 8) + 125 * pow(z34, 9))) /
         (5. * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 10));
}