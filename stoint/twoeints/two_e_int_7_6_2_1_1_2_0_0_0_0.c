#include <tgmath.h>

double two_e_int_7_6_2_1_1_2_0_0_0_0(double z12, double z34) {
  return (2304 * (784 * pow(z12, 9) + 9408 * pow(z12, 8) * z34 + 54174 * pow(z12, 7) * pow(z34, 2) +
                  201640 * pow(z12, 6) * pow(z34, 3) + 548460 * pow(z12, 5) * pow(z34, 4) +
                  290664 * pow(z12, 4) * pow(z34, 5) + 116548 * pow(z12, 3) * pow(z34, 6) +
                  33069 * pow(z12, 2) * pow(z34, 7) + 5880 * z12 * pow(z34, 8) + 490 * pow(z34, 9))) /
         (7. * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 12));
}