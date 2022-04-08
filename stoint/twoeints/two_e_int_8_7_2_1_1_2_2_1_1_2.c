#include <tgmath.h>

double two_e_int_8_7_2_1_1_2_2_1_1_2(double z12, double z34) {
  return (207360 * (588 * pow(z12, 11) + 8232 * pow(z12, 10) * z34 + 53607 * pow(z12, 9) * pow(z34, 2) +
                    215418 * pow(z12, 8) * pow(z34, 3) + 597597 * pow(z12, 7) * pow(z34, 4) +
                    1213212 * pow(z12, 6) * pow(z34, 5) + 797888 * pow(z12, 5) * pow(z34, 6) +
                    395668 * pow(z12, 4) * pow(z34, 7) + 143192 * pow(z12, 3) * pow(z34, 8) +
                    35708 * pow(z12, 2) * pow(z34, 9) + 5488 * z12 * pow(z34, 10) + 392 * pow(z34, 11))) /
         (7. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}