#include <tgmath.h>

double two_e_int_7_6_1_1_1_1_1_1_0_0(double z12, double z34) {
  return (3456 * (875 * pow(z12, 11) + 10500 * pow(z12, 10) * z34 + 57498 * pow(z12, 9) * pow(z34, 2) +
                  189476 * pow(z12, 8) * pow(z34, 3) + 416493 * pow(z12, 7) * pow(z34, 4) +
                  637560 * pow(z12, 6) * pow(z34, 5) + 569360 * pow(z12, 5) * pow(z34, 6) +
                  363858 * pow(z12, 4) * pow(z34, 7) + 163656 * pow(z12, 3) * pow(z34, 8) +
                  49388 * pow(z12, 2) * pow(z34, 9) + 9000 * z12 * pow(z34, 10) + 750 * pow(z34, 11))) /
         (5. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 12));
}