#include <tgmath.h>

double two_e_int_7_5_3_2_0_1_2_1_0_1(double z12, double z34) {
  return (5760 * sqrt(0.8571428571428571) *
          (14 * pow(z12, 8) + 154 * pow(z12, 7) * z34 + 770 * pow(z12, 6) * pow(z34, 2) +
           2310 * pow(z12, 5) * pow(z34, 3) + 1650 * pow(z12, 4) * pow(z34, 4) + 825 * pow(z12, 3) * pow(z34, 5) +
           275 * pow(z12, 2) * pow(z34, 6) + 55 * z12 * pow(z34, 7) + 5 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 11));
}