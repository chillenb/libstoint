#include <tgmath.h>

double two_e_int_7_6_3_2_2_1_0_1_2_1(double z12, double z34) {
  return (-3456 * sqrt(0.8571428571428571) *
          (56 * pow(z12, 9) + 672 * pow(z12, 8) * z34 + 3716 * pow(z12, 7) * pow(z34, 2) +
           12560 * pow(z12, 6) * pow(z34, 3) + 29040 * pow(z12, 5) * pow(z34, 4) + 17721 * pow(z12, 4) * pow(z34, 5) +
           7772 * pow(z12, 3) * pow(z34, 6) + 2316 * pow(z12, 2) * pow(z34, 7) + 420 * z12 * pow(z34, 8) +
           35 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 12));
}