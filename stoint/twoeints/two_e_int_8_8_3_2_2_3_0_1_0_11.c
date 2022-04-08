#include <tgmath.h>

double two_e_int_8_8_3_2_2_3_0_1_0_11(double z12, double z34) {
  return (829440 * sqrt(2) *
          (297 * pow(z12, 12) + 4455 * pow(z12, 11) * z34 + 31064 * pow(z12, 10) * pow(z34, 2) +
           133320 * pow(z12, 9) * pow(z34, 3) + 386200 * pow(z12, 8) * pow(z34, 4) +
           739336 * pow(z12, 7) * pow(z34, 5) + 638820 * pow(z12, 6) * pow(z34, 6) +
           739336 * pow(z12, 5) * pow(z34, 7) + 386200 * pow(z12, 4) * pow(z34, 8) +
           133320 * pow(z12, 3) * pow(z34, 9) + 31064 * pow(z12, 2) * pow(z34, 10) + 4455 * z12 * pow(z34, 11) +
           297 * pow(z34, 12))) /
         (11. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}