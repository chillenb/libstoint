#include <tgmath.h>

double two_e_int_8_7_2_2_1_1_0_0_0_0(double z12, double z34) {
  return (103680 * (280 * pow(z12, 13) + 3920 * pow(z12, 12) * z34 + 25576 * pow(z12, 11) * pow(z34, 2) +
                    103264 * pow(z12, 10) * pow(z34, 3) + 289016 * pow(z12, 9) * pow(z34, 4) +
                    595504 * pow(z12, 8) * pow(z34, 5) + 936936 * pow(z12, 7) * pow(z34, 6) +
                    783783 * pow(z12, 6) * pow(z34, 7) + 507962 * pow(z12, 5) * pow(z34, 8) +
                    249613 * pow(z12, 4) * pow(z34, 9) + 89852 * pow(z12, 3) * pow(z34, 10) +
                    22343 * pow(z12, 2) * pow(z34, 11) + 3430 * z12 * pow(z34, 12) + 245 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}