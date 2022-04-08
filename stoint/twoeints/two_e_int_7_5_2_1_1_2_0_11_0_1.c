#include <tgmath.h>

double two_e_int_7_5_2_1_1_2_0_11_0_1(double z12, double z34) {
  return (1152 * sqrt(3) *
          (98 * pow(z12, 8) + 1078 * pow(z12, 7) * z34 + 4310 * pow(z12, 6) * pow(z34, 2) +
           4290 * pow(z12, 5) * pow(z34, 3) + 7590 * pow(z12, 4) * pow(z34, 4) + 4983 * pow(z12, 3) * pow(z34, 5) +
           1853 * pow(z12, 2) * pow(z34, 6) + 385 * z12 * pow(z34, 7) + 35 * pow(z34, 8))) /
         (7. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}