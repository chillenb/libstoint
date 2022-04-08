#include <tgmath.h>

double two_e_int_8_5_3_2_1_2_1_1_0_0(double z12, double z34) {
  return (6912 * sqrt(0.8571428571428571) *
          (84 * pow(z12, 9) + 1008 * pow(z12, 8) * z34 + 5709 * pow(z12, 7) * pow(z34, 2) +
           20460 * pow(z12, 6) * pow(z34, 3) + 16720 * pow(z12, 5) * pow(z34, 4) + 10164 * pow(z12, 4) * pow(z34, 5) +
           4448 * pow(z12, 3) * pow(z34, 6) + 1324 * pow(z12, 2) * pow(z34, 7) + 240 * z12 * pow(z34, 8) +
           20 * pow(z34, 9))) /
         (pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 12));
}