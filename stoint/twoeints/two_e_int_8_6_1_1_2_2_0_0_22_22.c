#include <tgmath.h>

double two_e_int_8_6_1_1_2_2_0_0_22_22(double z12, double z34) {
  return (34560 *
          (140 * pow(z12, 12) + 1820 * pow(z12, 11) * z34 + 10848 * pow(z12, 10) * pow(z34, 2) +
           39104 * pow(z12, 9) * pow(z34, 3) + 94484 * pow(z12, 8) * pow(z34, 4) + 159588 * pow(z12, 7) * pow(z34, 5) +
           168740 * pow(z12, 6) * pow(z34, 6) + 130559 * pow(z12, 5) * pow(z34, 7) + 73827 * pow(z12, 4) * pow(z34, 8) +
           29822 * pow(z12, 3) * pow(z34, 9) + 8174 * pow(z12, 2) * pow(z34, 10) + 1365 * z12 * pow(z34, 11) +
           105 * pow(z34, 12))) /
         (pow(z12, 8) * pow(z34, 6) * pow(z12 + z34, 13));
}