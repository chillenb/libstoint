#include <tgmath.h>

double two_e_int_8_6_3_2_2_1_1_1_0_0(double z12, double z34) {
  return (13824 * sqrt(0.8571428571428571) *
          (168 * pow(z12, 10) + 2184 * pow(z12, 9) * z34 + 13269 * pow(z12, 8) * pow(z34, 2) +
           50193 * pow(z12, 7) * pow(z34, 3) + 132990 * pow(z12, 6) * pow(z34, 4) + 95238 * pow(z12, 5) * pow(z34, 5) +
           51454 * pow(z12, 4) * pow(z34, 6) + 20254 * pow(z12, 3) * pow(z34, 7) + 5478 * pow(z12, 2) * pow(z34, 8) +
           910 * z12 * pow(z34, 9) + 70 * pow(z34, 10))) /
         (pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 13));
}