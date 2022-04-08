#include <tgmath.h>

double two_e_int_8_5_2_1_2_1_1_0_11_0(double z12, double z34) {
  return (-20736 * (147 * pow(z12, 9) + 1764 * pow(z12, 8) * z34 + 11022 * pow(z12, 7) * pow(z34, 2) +
                    48180 * pow(z12, 6) * pow(z34, 3) + 34760 * pow(z12, 5) * pow(z34, 4) +
                    19437 * pow(z12, 4) * pow(z34, 5) + 8084 * pow(z12, 3) * pow(z34, 6) +
                    2342 * pow(z12, 2) * pow(z34, 7) + 420 * z12 * pow(z34, 8) + 35 * pow(z34, 9))) /
         (7. * pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 12));
}