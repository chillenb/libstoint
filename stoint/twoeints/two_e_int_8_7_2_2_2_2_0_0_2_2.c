#include <tgmath.h>

double two_e_int_8_7_2_2_2_2_0_0_2_2(double z12, double z34) {
  return (518400 * (392 * pow(z12, 13) + 5488 * pow(z12, 12) * z34 + 35576 * pow(z12, 11) * pow(z34, 2) +
                    141344 * pow(z12, 10) * pow(z34, 3) + 383832 * pow(z12, 9) * pow(z34, 4) +
                    752304 * pow(z12, 8) * pow(z34, 5) + 1097096 * pow(z12, 7) * pow(z34, 6) +
                    985985 * pow(z12, 6) * pow(z34, 7) + 669830 * pow(z12, 5) * pow(z34, 8) +
                    339019 * pow(z12, 4) * pow(z34, 9) + 124180 * pow(z12, 3) * pow(z34, 10) +
                    31165 * pow(z12, 2) * pow(z34, 11) + 4802 * z12 * pow(z34, 12) + 343 * pow(z34, 13))) /
         (7. * pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}