#include <tgmath.h>

double two_e_int_7_6_2_2_3_1_2_1_11_0(double z12, double z34) {
  return (-2304 * (324 * pow(z12, 7) + 3888 * pow(z12, 6) * z34 + 20009 * pow(z12, 5) * pow(z34, 2) +
                   54780 * pow(z12, 4) * pow(z34, 3) + 28680 * pow(z12, 3) * pow(z34, 4) +
                   9254 * pow(z12, 2) * pow(z34, 5) + 1728 * z12 * pow(z34, 6) + 144 * pow(z34, 7))) /
         (sqrt(7) * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}