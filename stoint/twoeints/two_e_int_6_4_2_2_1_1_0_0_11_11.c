#include <tgmath.h>

double two_e_int_6_4_2_2_1_1_0_0_11_11(double z12, double z34) {
  return (288 *
          (105 * pow(z12, 8) + 945 * pow(z12, 7) * z34 + 3724 * pow(z12, 6) * pow(z34, 2) +
           8316 * pow(z12, 5) * pow(z34, 3) + 8604 * pow(z12, 4) * pow(z34, 4) + 5826 * pow(z12, 3) * pow(z34, 5) +
           2514 * pow(z12, 2) * pow(z34, 6) + 630 * z12 * pow(z34, 7) + 70 * pow(z34, 8))) /
         (7. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 9));
}