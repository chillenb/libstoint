#include <tgmath.h>

double two_e_int_8_5_2_1_2_1_2_1_22_11(double z12, double z34) {
  return (-20736 * (294 * pow(z12, 9) + 3528 * pow(z12, 8) * z34 + 19569 * pow(z12, 7) * pow(z34, 2) +
                    66660 * pow(z12, 6) * pow(z34, 3) + 56320 * pow(z12, 5) * pow(z34, 4) +
                    34914 * pow(z12, 4) * pow(z34, 5) + 15448 * pow(z12, 3) * pow(z34, 6) +
                    4624 * pow(z12, 2) * pow(z34, 7) + 840 * z12 * pow(z34, 8) + 70 * pow(z34, 9))) /
         (7. * pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 12));
}