#include <tgmath.h>

double two_e_int_8_8_3_1_2_2_0_1_11_22(double z12, double z34) {
  return (1382400 * sqrt(0.8571428571428571) *
          (27 * pow(z12, 10) + 405 * pow(z12, 9) * z34 + 2890 * pow(z12, 8) * pow(z34, 2) +
           13110 * pow(z12, 7) * pow(z34, 3) + 42630 * pow(z12, 6) * pow(z34, 4) + 106106 * pow(z12, 5) * pow(z34, 5) +
           42630 * pow(z12, 4) * pow(z34, 6) + 13110 * pow(z12, 3) * pow(z34, 7) + 2890 * pow(z12, 2) * pow(z34, 8) +
           405 * z12 * pow(z34, 9) + 27 * pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}