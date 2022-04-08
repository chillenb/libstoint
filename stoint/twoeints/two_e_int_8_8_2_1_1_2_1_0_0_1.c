#include <tgmath.h>

double two_e_int_8_8_2_1_1_2_1_0_0_1(double z12, double z34) {
  return (7464960 *
          (49 * pow(z12, 12) + 735 * pow(z12, 11) * z34 + 5233 * pow(z12, 10) * pow(z34, 2) +
           23615 * pow(z12, 9) * pow(z34, 3) + 76125 * pow(z12, 8) * pow(z34, 4) + 187187 * pow(z12, 7) * pow(z34, 5) +
           365365 * pow(z12, 6) * pow(z34, 6) + 187187 * pow(z12, 5) * pow(z34, 7) + 76125 * pow(z12, 4) * pow(z34, 8) +
           23615 * pow(z12, 3) * pow(z34, 9) + 5233 * pow(z12, 2) * pow(z34, 10) + 735 * z12 * pow(z34, 11) +
           49 * pow(z34, 12))) /
         (7. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}