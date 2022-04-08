#include <tgmath.h>

double two_e_int_6_6_2_1_1_0_0_11_11_0(double z12, double z34) {
  return (-8064 * sqrt(5) *
          (pow(z12, 8) + 11 * pow(z12, 7) * z34 + 55 * pow(z12, 6) * pow(z34, 2) + 165 * pow(z12, 5) * pow(z34, 3) +
           330 * pow(z12, 4) * pow(z34, 4) + 165 * pow(z12, 3) * pow(z34, 5) + 55 * pow(z12, 2) * pow(z34, 6) +
           11 * z12 * pow(z34, 7) + pow(z34, 8))) /
         (pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 11));
}