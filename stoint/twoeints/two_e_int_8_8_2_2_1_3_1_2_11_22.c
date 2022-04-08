#include <tgmath.h>

double two_e_int_8_8_2_2_1_3_1_2_11_22(double z12, double z34) {
  return (-4147200 * sqrt(0.7142857142857143) *
          (18 * pow(z12, 10) + 270 * pow(z12, 9) * z34 + 1901 * pow(z12, 8) * pow(z34, 2) +
           8355 * pow(z12, 7) * pow(z34, 3) + 25725 * pow(z12, 6) * pow(z34, 4) + 59059 * pow(z12, 5) * pow(z34, 5) +
           25725 * pow(z12, 4) * pow(z34, 6) + 8355 * pow(z12, 3) * pow(z34, 7) + 1901 * pow(z12, 2) * pow(z34, 8) +
           270 * z12 * pow(z34, 9) + 18 * pow(z34, 10))) /
         (pow(z12, 6) * pow(z34, 6) * pow(z12 + z34, 15));
}