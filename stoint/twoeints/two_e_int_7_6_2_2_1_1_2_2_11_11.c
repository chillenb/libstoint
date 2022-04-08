#include <tgmath.h>

double two_e_int_7_6_2_2_1_1_2_2_11_11(double z12, double z34) {
  return (3456 *
          (175 * pow(z12, 11) + 2100 * pow(z12, 10) * z34 + 11586 * pow(z12, 9) * pow(z34, 2) +
           38932 * pow(z12, 8) * pow(z34, 3) + 89001 * pow(z12, 7) * pow(z34, 4) + 146520 * pow(z12, 6) * pow(z34, 5) +
           122320 * pow(z12, 5) * pow(z34, 6) + 75306 * pow(z12, 4) * pow(z34, 7) + 33192 * pow(z12, 3) * pow(z34, 8) +
           9916 * pow(z12, 2) * pow(z34, 9) + 1800 * z12 * pow(z34, 10) + 150 * pow(z34, 11))) /
         (pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 12));
}