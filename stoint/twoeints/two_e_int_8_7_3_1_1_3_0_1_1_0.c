#include <tgmath.h>

double two_e_int_8_7_3_1_1_3_0_1_1_0(double z12, double z34) {
  return (9216 * (486 * pow(z12, 9) + 6804 * pow(z12, 8) * z34 + 49726 * pow(z12, 7) * pow(z34, 2) +
                  253904 * pow(z12, 6) * pow(z34, 3) + 986986 * pow(z12, 5) * pow(z34, 4) +
                  368368 * pow(z12, 4) * pow(z34, 5) + 107702 * pow(z12, 3) * pow(z34, 6) +
                  23488 * pow(z12, 2) * pow(z34, 7) + 3402 * z12 * pow(z34, 8) + 243 * pow(z34, 9))) /
         (pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}