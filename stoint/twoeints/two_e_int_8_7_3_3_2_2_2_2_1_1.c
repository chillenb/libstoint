#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_2_2_1_1(double z12, double z34) {
  return (1209600 *
          (24 * pow(z12, 13) + 336 * pow(z12, 12) * z34 + 2184 * pow(z12, 11) * pow(z34, 2) +
           8736 * pow(z12, 10) * pow(z34, 3) + 24056 * pow(z12, 9) * pow(z34, 4) + 48496 * pow(z12, 8) * pow(z34, 5) +
           74984 * pow(z12, 7) * pow(z34, 6) + 63791 * pow(z12, 6) * pow(z34, 7) + 42154 * pow(z12, 5) * pow(z34, 8) +
           21029 * pow(z12, 4) * pow(z34, 9) + 7644 * pow(z12, 3) * pow(z34, 10) + 1911 * pow(z12, 2) * pow(z34, 11) +
           294 * z12 * pow(z34, 12) + 21 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}