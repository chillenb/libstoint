#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_3_3_2_2(double z12, double z34) {
  return (518400 *
          (56 * pow(z12, 13) + 784 * pow(z12, 12) * z34 + 5112 * pow(z12, 11) * pow(z34, 2) +
           20608 * pow(z12, 10) * pow(z34, 3) + 57520 * pow(z12, 9) * pow(z34, 4) + 118048 * pow(z12, 8) * pow(z34, 5) +
           184912 * pow(z12, 7) * pow(z34, 6) + 155337 * pow(z12, 6) * pow(z34, 7) +
           101038 * pow(z12, 5) * pow(z34, 8) + 49779 * pow(z12, 4) * pow(z34, 9) + 17948 * pow(z12, 3) * pow(z34, 10) +
           4467 * pow(z12, 2) * pow(z34, 11) + 686 * z12 * pow(z34, 12) + 49 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}