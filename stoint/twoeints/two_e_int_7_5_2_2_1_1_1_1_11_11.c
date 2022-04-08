#include <tgmath.h>

double two_e_int_7_5_2_2_1_1_1_1_11_11(double z12, double z34) {
  return (3456 *
          (35 * pow(z12, 10) + 385 * pow(z12, 9) * z34 + 1919 * pow(z12, 8) * pow(z34, 2) +
           5709 * pow(z12, 7) * pow(z34, 3) + 11220 * pow(z12, 6) * pow(z34, 4) + 11385 * pow(z12, 5) * pow(z34, 5) +
           8195 * pow(z12, 4) * pow(z34, 6) + 4114 * pow(z12, 3) * pow(z34, 7) + 1374 * pow(z12, 2) * pow(z34, 8) +
           275 * z12 * pow(z34, 9) + 25 * pow(z34, 10))) /
         (pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 11));
}