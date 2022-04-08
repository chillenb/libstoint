#include <tgmath.h>

double two_e_int_8_8_3_3_3_3_2_2_1_1(double z12, double z34) {
  return (203212800 * (143 * pow(z12, 14) + 2145 * pow(z12, 13) * z34 + 15015 * pow(z12, 12) * pow(z34, 2) +
                       65065 * pow(z12, 11) * pow(z34, 3) + 195182 * pow(z12, 10) * pow(z34, 4) +
                       429234 * pow(z12, 9) * pow(z34, 5) + 713600 * pow(z12, 8) * pow(z34, 6) +
                       903040 * pow(z12, 7) * pow(z34, 7) + 713600 * pow(z12, 6) * pow(z34, 8) +
                       429234 * pow(z12, 5) * pow(z34, 9) + 195182 * pow(z12, 4) * pow(z34, 10) +
                       65065 * pow(z12, 3) * pow(z34, 11) + 15015 * pow(z12, 2) * pow(z34, 12) +
                       2145 * z12 * pow(z34, 13) + 143 * pow(z34, 14))) /
         (143. * pow(z12, 8) * pow(z34, 8) * pow(z12 + z34, 15));
}