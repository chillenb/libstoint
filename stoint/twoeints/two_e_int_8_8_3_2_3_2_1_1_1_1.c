#include <tgmath.h>

double two_e_int_8_8_3_2_3_2_1_1_1_1(double z12, double z34) {
  return (552960 * (1188 * pow(z12, 12) + 17820 * pow(z12, 11) * z34 + 124861 * pow(z12, 10) * pow(z34, 2) +
                    542355 * pow(z12, 9) * pow(z34, 3) + 1642450 * pow(z12, 8) * pow(z34, 4) +
                    3744494 * pow(z12, 7) * pow(z34, 5) + 6964230 * pow(z12, 6) * pow(z34, 6) +
                    3744494 * pow(z12, 5) * pow(z34, 7) + 1642450 * pow(z12, 4) * pow(z34, 8) +
                    542355 * pow(z12, 3) * pow(z34, 9) + 124861 * pow(z12, 2) * pow(z34, 10) +
                    17820 * z12 * pow(z34, 11) + 1188 * pow(z34, 12))) /
         (11. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}