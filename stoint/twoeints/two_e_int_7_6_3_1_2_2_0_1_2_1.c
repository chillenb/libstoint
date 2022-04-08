#include <tgmath.h>

double two_e_int_7_6_3_1_2_2_0_1_2_1(double z12, double z34) {
  return (-768 * sqrt(0.8571428571428571) *
          (243 * pow(z12, 7) + 2916 * pow(z12, 6) * z34 + 17413 * pow(z12, 5) * pow(z34, 2) +
           69960 * pow(z12, 4) * pow(z34, 3) + 26760 * pow(z12, 3) * pow(z34, 4) + 7378 * pow(z12, 2) * pow(z34, 5) +
           1296 * z12 * pow(z34, 6) + 108 * pow(z34, 7))) /
         (pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}