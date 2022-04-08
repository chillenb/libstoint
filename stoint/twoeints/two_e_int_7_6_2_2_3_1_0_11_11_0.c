#include <tgmath.h>

double two_e_int_7_6_2_2_3_1_0_11_11_0(double z12, double z34) {
  return (2304 * sqrt(0.8571428571428571) *
          (54 * pow(z12, 7) + 648 * pow(z12, 6) * z34 + 4939 * pow(z12, 5) * pow(z34, 2) +
           28380 * pow(z12, 4) * pow(z34, 3) + 8280 * pow(z12, 3) * pow(z34, 4) + 1834 * pow(z12, 2) * pow(z34, 5) +
           288 * z12 * pow(z34, 6) + 24 * pow(z34, 7))) /
         (pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}