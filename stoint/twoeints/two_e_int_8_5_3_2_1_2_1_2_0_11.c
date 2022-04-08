#include <tgmath.h>

double two_e_int_8_5_3_2_1_2_1_2_0_11(double z12, double z34) {
  return (6912 * (63 * pow(z12, 9) + 756 * pow(z12, 8) * z34 + 2838 * pow(z12, 7) * pow(z34, 2) -
                  1980 * pow(z12, 6) * pow(z34, 3) + 4840 * pow(z12, 5) * pow(z34, 4) +
                  5313 * pow(z12, 4) * pow(z34, 5) + 2916 * pow(z12, 3) * pow(z34, 6) +
                  958 * pow(z12, 2) * pow(z34, 7) + 180 * z12 * pow(z34, 8) + 15 * pow(z34, 9))) /
         (sqrt(7) * pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 12));
}