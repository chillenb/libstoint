#include <tgmath.h>

double two_e_int_8_7_2_1_1_2_0_11_1_2(double z12, double z34) {
  return (69120 * sqrt(6) *
          (294 * pow(z12, 11) + 4116 * pow(z12, 10) * z34 + 27051 * pow(z12, 9) * pow(z34, 2) +
           111174 * pow(z12, 8) * pow(z34, 3) + 321321 * pow(z12, 7) * pow(z34, 4) +
           696696 * pow(z12, 6) * pow(z34, 5) + 431704 * pow(z12, 5) * pow(z34, 6) +
           206024 * pow(z12, 4) * pow(z34, 7) + 72856 * pow(z12, 3) * pow(z34, 8) + 17944 * pow(z12, 2) * pow(z34, 9) +
           2744 * z12 * pow(z34, 10) + 196 * pow(z34, 11))) /
         (7. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 14));
}