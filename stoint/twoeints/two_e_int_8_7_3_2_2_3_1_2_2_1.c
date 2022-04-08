#include <tgmath.h>

double two_e_int_8_7_3_2_2_3_1_2_2_1(double z12, double z34) {
  return (414720 *
          (33 * pow(z12, 11) + 462 * pow(z12, 10) * z34 + 3487 * pow(z12, 9) * pow(z34, 2) +
           18788 * pow(z12, 8) * pow(z34, 3) + 78702 * pow(z12, 7) * pow(z34, 4) + 264992 * pow(z12, 6) * pow(z34, 5) +
           111608 * pow(z12, 5) * pow(z34, 6) + 38288 * pow(z12, 4) * pow(z34, 7) + 10472 * pow(z12, 3) * pow(z34, 8) +
           2178 * pow(z12, 2) * pow(z34, 9) + 308 * z12 * pow(z34, 10) + 22 * pow(z34, 11))) /
         (11. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}