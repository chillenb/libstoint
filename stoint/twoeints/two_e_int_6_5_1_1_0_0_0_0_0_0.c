#include <tgmath.h>

double two_e_int_6_5_1_1_0_0_0_0_0_0(double z12, double z34) {
  return (2880 * (6 * pow(z12, 9) + 60 * pow(z12, 8) * z34 + 270 * pow(z12, 7) * pow(z34, 2) +
                  720 * pow(z12, 6) * pow(z34, 3) + 1260 * pow(z12, 5) * pow(z34, 4) +
                  1050 * pow(z12, 4) * pow(z34, 5) + 600 * pow(z12, 3) * pow(z34, 6) + 225 * pow(z12, 2) * pow(z34, 7) +
                  50 * z12 * pow(z34, 8) + 5 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 10));
}