#include <tgmath.h>

double two_e_int_8_5_3_3_1_1_1_1_11_11(double z12, double z34) {
  return (24192 *
          (40 * pow(z12, 11) + 480 * pow(z12, 10) * z34 + 2628 * pow(z12, 9) * pow(z34, 2) +
           8656 * pow(z12, 8) * pow(z34, 3) + 19008 * pow(z12, 7) * pow(z34, 4) + 22605 * pow(z12, 6) * pow(z34, 5) +
           19580 * pow(z12, 5) * pow(z34, 6) + 12309 * pow(z12, 4) * pow(z34, 7) + 5488 * pow(z12, 3) * pow(z34, 8) +
           1649 * pow(z12, 2) * pow(z34, 9) + 300 * z12 * pow(z34, 10) + 25 * pow(z34, 11))) /
         (pow(z12, 8) * pow(z34, 5) * pow(z12 + z34, 12));
}