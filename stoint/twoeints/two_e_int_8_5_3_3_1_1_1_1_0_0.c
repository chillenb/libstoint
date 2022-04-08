#include <tgmath.h>

double two_e_int_8_5_3_3_1_1_1_1_0_0(double z12, double z34) {
  return (24192 *
          (40 * pow(z12, 11) + 480 * pow(z12, 10) * z34 + 2664 * pow(z12, 9) * pow(z34, 2) +
           9088 * pow(z12, 8) * pow(z34, 3) + 21384 * pow(z12, 7) * pow(z34, 4) + 24090 * pow(z12, 6) * pow(z34, 5) +
           20240 * pow(z12, 5) * pow(z34, 6) + 12507 * pow(z12, 4) * pow(z34, 7) + 5524 * pow(z12, 3) * pow(z34, 8) +
           1652 * pow(z12, 2) * pow(z34, 9) + 300 * z12 * pow(z34, 10) + 25 * pow(z34, 11))) /
         (pow(z12, 8) * pow(z34, 5) * pow(z12 + z34, 12));
}