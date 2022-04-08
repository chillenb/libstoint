#include <tgmath.h>

double two_e_int_8_7_3_3_2_2_1_1_0_0(double z12, double z34) {
  return (103680 * (280 * pow(z12, 13) + 3920 * pow(z12, 12) * z34 + 25528 * pow(z12, 11) * pow(z34, 2) +
                    102592 * pow(z12, 10) * pow(z34, 3) + 284728 * pow(z12, 9) * pow(z34, 4) +
                    579152 * pow(z12, 8) * pow(z34, 5) + 896168 * pow(z12, 7) * pow(z34, 6) +
                    761579 * pow(z12, 6) * pow(z34, 7) + 499506 * pow(z12, 5) * pow(z34, 8) +
                    247449 * pow(z12, 4) * pow(z34, 9) + 89516 * pow(z12, 3) * pow(z34, 10) +
                    22319 * pow(z12, 2) * pow(z34, 11) + 3430 * z12 * pow(z34, 12) + 245 * pow(z34, 13))) /
         (pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}