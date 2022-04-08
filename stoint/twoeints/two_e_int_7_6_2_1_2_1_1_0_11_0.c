#include <tgmath.h>

double two_e_int_7_6_2_1_2_1_1_0_11_0(double z12, double z34) {
  return (-3456 * (392 * pow(z12, 9) + 4704 * pow(z12, 8) * z34 + 27312 * pow(z12, 7) * pow(z34, 2) +
                   103520 * pow(z12, 6) * pow(z34, 3) + 289080 * pow(z12, 5) * pow(z34, 4) +
                   149787 * pow(z12, 4) * pow(z34, 5) + 59084 * pow(z12, 3) * pow(z34, 6) +
                   16602 * pow(z12, 2) * pow(z34, 7) + 2940 * z12 * pow(z34, 8) + 245 * pow(z34, 9))) /
         (7. * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 12));
}