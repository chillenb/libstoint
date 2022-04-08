#include <tgmath.h>

double two_e_int_7_6_2_1_2_1_0_11_0_1(double z12, double z34) {
  return (-1152 * (392 * pow(z12, 9) + 4704 * pow(z12, 8) * z34 + 29112 * pow(z12, 7) * pow(z34, 2) +
                   125120 * pow(z12, 6) * pow(z34, 3) + 407880 * pow(z12, 5) * pow(z34, 4) +
                   185427 * pow(z12, 4) * pow(z34, 5) + 65564 * pow(z12, 3) * pow(z34, 6) +
                   17142 * pow(z12, 2) * pow(z34, 7) + 2940 * z12 * pow(z34, 8) + 245 * pow(z34, 9))) /
         (7. * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 12));
}