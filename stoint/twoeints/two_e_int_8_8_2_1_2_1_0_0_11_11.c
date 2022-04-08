#include <tgmath.h>

double two_e_int_8_8_2_1_2_1_0_0_11_11(double z12, double z34) {
  return (2488320 * sqrt(3) *
          (98 * pow(z12, 12) + 1470 * pow(z12, 11) * z34 + 10191 * pow(z12, 10) * pow(z34, 2) +
           43105 * pow(z12, 9) * pow(z34, 3) + 123375 * pow(z12, 8) * pow(z34, 4) + 249249 * pow(z12, 7) * pow(z34, 5) +
           355355 * pow(z12, 6) * pow(z34, 6) + 249249 * pow(z12, 5) * pow(z34, 7) +
           123375 * pow(z12, 4) * pow(z34, 8) + 43105 * pow(z12, 3) * pow(z34, 9) + 10191 * pow(z12, 2) * pow(z34, 10) +
           1470 * z12 * pow(z34, 11) + 98 * pow(z34, 12))) /
         (7. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}