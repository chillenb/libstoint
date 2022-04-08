#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_0_0_22_22(double z12, double z34) {
  return (103680 * (280 * pow(z12, 13) + 3920 * pow(z12, 12) * z34 + 25416 * pow(z12, 11) * pow(z34, 2) +
                    101024 * pow(z12, 10) * pow(z34, 3) + 274536 * pow(z12, 9) * pow(z34, 4) +
                    538384 * pow(z12, 8) * pow(z34, 5) + 784056 * pow(z12, 7) * pow(z34, 6) +
                    705523 * pow(z12, 6) * pow(z34, 7) + 479122 * pow(z12, 5) * pow(z34, 8) +
                    242353 * pow(z12, 4) * pow(z34, 9) + 88732 * pow(z12, 3) * pow(z34, 10) +
                    22263 * pow(z12, 2) * pow(z34, 11) + 3430 * z12 * pow(z34, 12) + 245 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}