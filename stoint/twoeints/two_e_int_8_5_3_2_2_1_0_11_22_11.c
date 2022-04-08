#include <tgmath.h>

double two_e_int_8_5_3_2_2_1_0_11_22_11(double z12, double z34) {
  return (-2304 * sqrt(0.8571428571428571) *
          (189 * pow(z12, 9) + 2268 * pow(z12, 8) * z34 + 12639 * pow(z12, 7) * pow(z34, 2) +
           43560 * pow(z12, 6) * pow(z34, 3) + 36520 * pow(z12, 5) * pow(z34, 4) + 22539 * pow(z12, 4) * pow(z34, 5) +
           9948 * pow(z12, 3) * pow(z34, 6) + 2974 * pow(z12, 2) * pow(z34, 7) + 540 * z12 * pow(z34, 8) +
           45 * pow(z34, 9))) /
         (pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 12));
}