#include <tgmath.h>

double two_e_int_8_5_2_1_2_1_0_0_0_0(double z12, double z34) {
  return (6912 * (588 * pow(z12, 9) + 7056 * pow(z12, 8) * z34 + 43263 * pow(z12, 7) * pow(z34, 2) +
                  182820 * pow(z12, 6) * pow(z34, 3) + 134640 * pow(z12, 5) * pow(z34, 4) +
                  76428 * pow(z12, 4) * pow(z34, 5) + 32096 * pow(z12, 3) * pow(z34, 6) +
                  9348 * pow(z12, 2) * pow(z34, 7) + 1680 * z12 * pow(z34, 8) + 140 * pow(z34, 9))) /
         (7. * pow(z12, 7) * pow(z34, 4) * pow(z12 + z34, 12));
}