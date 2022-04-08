#include <tgmath.h>

double two_e_int_8_6_3_1_3_1_3_1_33_11(double z12, double z34) {
  return (23040 *
          (243 * pow(z12, 8) + 3159 * pow(z12, 7) * z34 + 19064 * pow(z12, 6) * pow(z34, 2) +
           70928 * pow(z12, 5) * pow(z34, 3) + 39000 * pow(z12, 4) * pow(z34, 4) + 15509 * pow(z12, 3) * pow(z34, 5) +
           4217 * pow(z12, 2) * pow(z34, 6) + 702 * z12 * pow(z34, 7) + 54 * pow(z34, 8))) /
         (pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}