#include <tgmath.h>

double two_e_int_8_7_2_1_1_2_0_0_0_0(double z12, double z34) {
  return (69120 * (1176 * pow(z12, 11) + 16464 * pow(z12, 10) * z34 + 109689 * pow(z12, 9) * pow(z34, 2) +
                   465486 * pow(z12, 8) * pow(z34, 3) + 1420419 * pow(z12, 7) * pow(z34, 4) +
                   3327324 * pow(z12, 6) * pow(z34, 5) + 1923376 * pow(z12, 5) * pow(z34, 6) +
                   873236 * pow(z12, 4) * pow(z34, 7) + 298984 * pow(z12, 3) * pow(z34, 8) +
                   72316 * pow(z12, 2) * pow(z34, 9) + 10976 * z12 * pow(z34, 10) + 784 * pow(z34, 11))) /
         (7. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}