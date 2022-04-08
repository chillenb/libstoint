#include <tgmath.h>

double two_e_int_7_5_2_2_1_1_2_2_1_1(double z12, double z34) {
  return (3456 *
          (35 * pow(z12, 10) + 385 * pow(z12, 9) * z34 + 1937 * pow(z12, 8) * pow(z34, 2) +
           5907 * pow(z12, 7) * pow(z34, 3) + 12210 * pow(z12, 6) * pow(z34, 4) + 11880 * pow(z12, 5) * pow(z34, 5) +
           8360 * pow(z12, 4) * pow(z34, 6) + 4147 * pow(z12, 3) * pow(z34, 7) + 1377 * pow(z12, 2) * pow(z34, 8) +
           275 * z12 * pow(z34, 9) + 25 * pow(z34, 10))) /
         (pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 11));
}