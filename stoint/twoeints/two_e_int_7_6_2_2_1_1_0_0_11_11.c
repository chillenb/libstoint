#include <tgmath.h>

double two_e_int_7_6_2_2_1_1_0_0_11_11(double z12, double z34) {
  return (3456 *
          (175 * pow(z12, 11) + 2100 * pow(z12, 10) * z34 + 11514 * pow(z12, 9) * pow(z34, 2) +
           38068 * pow(z12, 8) * pow(z34, 3) + 84249 * pow(z12, 7) * pow(z34, 4) + 130680 * pow(z12, 6) * pow(z34, 5) +
           115280 * pow(z12, 5) * pow(z34, 6) + 73194 * pow(z12, 4) * pow(z34, 7) + 32808 * pow(z12, 3) * pow(z34, 8) +
           9884 * pow(z12, 2) * pow(z34, 9) + 1800 * z12 * pow(z34, 10) + 150 * pow(z34, 11))) /
         (pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 12));
}