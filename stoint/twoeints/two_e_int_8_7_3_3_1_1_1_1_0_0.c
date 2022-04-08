#include <tgmath.h>

double two_e_int_8_7_3_3_1_1_1_1_0_0(double z12, double z34) {
  return (145152 * (200 * pow(z12, 13) + 2800 * pow(z12, 12) * z34 + 18248 * pow(z12, 11) * pow(z34, 2) +
                    73472 * pow(z12, 10) * pow(z34, 3) + 204568 * pow(z12, 9) * pow(z34, 4) +
                    417872 * pow(z12, 8) * pow(z34, 5) + 648648 * pow(z12, 7) * pow(z34, 6) +
                    549549 * pow(z12, 6) * pow(z34, 7) + 359086 * pow(z12, 5) * pow(z34, 8) +
                    177359 * pow(z12, 4) * pow(z34, 9) + 64036 * pow(z12, 3) * pow(z34, 10) +
                    15949 * pow(z12, 2) * pow(z34, 11) + 2450 * z12 * pow(z34, 12) + 175 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}