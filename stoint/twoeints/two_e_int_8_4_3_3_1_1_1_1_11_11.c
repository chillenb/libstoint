#include <tgmath.h>

double two_e_int_8_4_3_3_1_1_1_1_11_11(double z12, double z34) {
  return (3456 *
          (70 * pow(z12, 10) + 770 * pow(z12, 9) * z34 + 3808 * pow(z12, 8) * pow(z34, 2) +
           11088 * pow(z12, 7) * pow(z34, 3) + 15840 * pow(z12, 6) * pow(z34, 4) + 16005 * pow(z12, 5) * pow(z34, 5) +
           11495 * pow(z12, 4) * pow(z34, 6) + 5764 * pow(z12, 3) * pow(z34, 7) + 1924 * pow(z12, 2) * pow(z34, 8) +
           385 * z12 * pow(z34, 9) + 35 * pow(z34, 10))) /
         (pow(z12, 8) * pow(z34, 4) * pow(z12 + z34, 11));
}