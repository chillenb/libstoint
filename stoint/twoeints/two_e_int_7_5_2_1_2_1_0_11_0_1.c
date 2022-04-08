#include <tgmath.h>

double two_e_int_7_5_2_1_2_1_0_11_0_1(double z12, double z34) {
  return (-1152 *
          (98 * pow(z12, 8) + 1078 * pow(z12, 7) * z34 + 7010 * pow(z12, 6) * pow(z34, 2) +
           33990 * pow(z12, 5) * pow(z34, 3) + 17490 * pow(z12, 4) * pow(z34, 4) + 6963 * pow(z12, 3) * pow(z34, 5) +
           2033 * pow(z12, 2) * pow(z34, 6) + 385 * z12 * pow(z34, 7) + 35 * pow(z34, 8))) /
         (7. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}