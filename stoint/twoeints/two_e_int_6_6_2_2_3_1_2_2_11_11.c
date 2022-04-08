#include <tgmath.h>

double two_e_int_6_6_2_2_3_1_2_2_11_11(double z12, double z34) {
  return (-2304 * sqrt(0.2857142857142857) *
          (18 * pow(z12, 6) + 198 * pow(z12, 5) * z34 + 1015 * pow(z12, 4) * pow(z34, 2) +
           3245 * pow(z12, 3) * pow(z34, 3) + 1015 * pow(z12, 2) * pow(z34, 4) + 198 * z12 * pow(z34, 5) +
           18 * pow(z34, 6))) /
         (pow(z12, 4) * pow(z34, 4) * pow(z12 + z34, 11));
}