#include <tgmath.h>

double two_e_int_7_4_1_1_1_1_1_1_0_0(double z12, double z34) {
  return (864 * (175 * pow(z12, 9) + 1750 * pow(z12, 8) * z34 + 7707 * pow(z12, 7) * pow(z34, 2) +
                 19320 * pow(z12, 6) * pow(z34, 3) + 24240 * pow(z12, 5) * pow(z34, 4) +
                 20640 * pow(z12, 4) * pow(z34, 5) + 11920 * pow(z12, 3) * pow(z34, 6) +
                 4492 * pow(z12, 2) * pow(z34, 7) + 1000 * z12 * pow(z34, 8) + 100 * pow(z34, 9))) /
         (5. * pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 10));
}