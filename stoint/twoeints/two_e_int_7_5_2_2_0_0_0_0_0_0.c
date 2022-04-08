#include <tgmath.h>

double two_e_int_7_5_2_2_0_0_0_0_0_0(double z12, double z34) {
  return (17280 *
          (7 * pow(z12, 10) + 77 * pow(z12, 9) * z34 + 385 * pow(z12, 8) * pow(z34, 2) +
           1155 * pow(z12, 7) * pow(z34, 3) + 2310 * pow(z12, 6) * pow(z34, 4) + 2310 * pow(z12, 5) * pow(z34, 5) +
           1650 * pow(z12, 4) * pow(z34, 6) + 825 * pow(z12, 3) * pow(z34, 7) + 275 * pow(z12, 2) * pow(z34, 8) +
           55 * z12 * pow(z34, 9) + 5 * pow(z34, 10))) /
         (pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 11));
}