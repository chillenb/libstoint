#include <tgmath.h>

double two_e_int_7_4_1_1_1_1_1_1_1_1(double z12, double z34) {
  return (864 * (175 * pow(z12, 9) + 1750 * pow(z12, 8) * z34 + 7959 * pow(z12, 7) * pow(z34, 2) +
                 21840 * pow(z12, 6) * pow(z34, 3) + 25680 * pow(z12, 5) * pow(z34, 4) +
                 21180 * pow(z12, 4) * pow(z34, 5) + 12040 * pow(z12, 3) * pow(z34, 6) +
                 4504 * pow(z12, 2) * pow(z34, 7) + 1000 * z12 * pow(z34, 8) + 100 * pow(z34, 9))) /
         (5. * pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 10));
}