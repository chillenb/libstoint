#include <tgmath.h>

double two_e_int_8_7_3_1_3_1_0_1_1_0(double z12, double z34) {
  return (-4608 * sqrt(6) *
          (648 * pow(z12, 9) + 9072 * pow(z12, 8) * z34 + 53468 * pow(z12, 7) * pow(z34, 2) +
           158872 * pow(z12, 6) * pow(z34, 3) + 148148 * pow(z12, 5) * pow(z34, 4) +
           199199 * pow(z12, 4) * pow(z34, 5) + 98686 * pow(z12, 3) * pow(z34, 6) + 28109 * pow(z12, 2) * pow(z34, 7) +
           4536 * z12 * pow(z34, 8) + 324 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}