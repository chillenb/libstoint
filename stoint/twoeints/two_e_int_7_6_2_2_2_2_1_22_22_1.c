#include <tgmath.h>

double two_e_int_7_6_2_2_2_2_1_22_22_1(double z12, double z34) {
  return (288000 * (11 * pow(z12, 3) + 132 * pow(z12, 2) * z34 + 24 * z12 * pow(z34, 2) + 2 * pow(z34, 3))) /
         (pow(z12, 3) * pow(z34, 2) * pow(z12 + z34, 12));
}