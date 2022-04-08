#include <tgmath.h>

double two_e_int_8_7_3_3_1_1_2_2_0_0(double z12, double z34) {
  return (3628800 *
          (8 * pow(z12, 13) + 112 * pow(z12, 12) * z34 + 728 * pow(z12, 11) * pow(z34, 2) +
           2912 * pow(z12, 10) * pow(z34, 3) + 8008 * pow(z12, 9) * pow(z34, 4) + 16016 * pow(z12, 8) * pow(z34, 5) +
           24024 * pow(z12, 7) * pow(z34, 6) + 21021 * pow(z12, 6) * pow(z34, 7) + 14014 * pow(z12, 5) * pow(z34, 8) +
           7007 * pow(z12, 4) * pow(z34, 9) + 2548 * pow(z12, 3) * pow(z34, 10) + 637 * pow(z12, 2) * pow(z34, 11) +
           98 * z12 * pow(z34, 12) + 7 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}