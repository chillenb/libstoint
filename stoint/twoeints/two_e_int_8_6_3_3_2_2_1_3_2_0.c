#include <tgmath.h>

double two_e_int_8_6_3_3_2_2_1_3_2_0(double z12, double z34) {
  return (23040 * sqrt(10) *
          (198 * pow(z12, 8) + 2574 * pow(z12, 7) * z34 + 18414 * pow(z12, 6) * pow(z34, 2) +
           95238 * pow(z12, 5) * pow(z34, 3) + 41990 * pow(z12, 4) * pow(z34, 4) + 14339 * pow(z12, 3) * pow(z34, 5) +
           3567 * pow(z12, 2) * pow(z34, 6) + 572 * z12 * pow(z34, 7) + 44 * pow(z34, 8))) /
         (11. * pow(z12, 6) * pow(z34, 4) * pow(z12 + z34, 13));
}