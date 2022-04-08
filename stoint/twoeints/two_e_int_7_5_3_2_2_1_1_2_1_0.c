#include <tgmath.h>

double two_e_int_7_5_3_2_2_1_1_2_1_0(double z12, double z34) {
  return (-3456 * (14 * pow(z12, 8) + 154 * pow(z12, 7) * z34 + 530 * pow(z12, 6) * pow(z34, 2) -
                   330 * pow(z12, 5) * pow(z34, 3) + 770 * pow(z12, 4) * pow(z34, 4) + 649 * pow(z12, 3) * pow(z34, 5) +
                   259 * pow(z12, 2) * pow(z34, 6) + 55 * z12 * pow(z34, 7) + 5 * pow(z34, 8))) /
         (sqrt(7) * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}