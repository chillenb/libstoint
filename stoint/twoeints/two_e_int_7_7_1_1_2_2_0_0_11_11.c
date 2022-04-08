#include <tgmath.h>

double two_e_int_7_7_1_1_2_2_0_0_11_11(double z12, double z34) {
  return (20736 *
          (175 * pow(z12, 12) + 2275 * pow(z12, 11) * z34 + 13674 * pow(z12, 10) * pow(z34, 2) +
           50362 * pow(z12, 9) * pow(z34, 3) + 126997 * pow(z12, 8) * pow(z34, 4) + 232089 * pow(z12, 7) * pow(z34, 5) +
           317460 * pow(z12, 6) * pow(z34, 6) + 232089 * pow(z12, 5) * pow(z34, 7) +
           126997 * pow(z12, 4) * pow(z34, 8) + 50362 * pow(z12, 3) * pow(z34, 9) + 13674 * pow(z12, 2) * pow(z34, 10) +
           2275 * z12 * pow(z34, 11) + 175 * pow(z34, 12))) /
         (pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 13));
}