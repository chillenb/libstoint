#include <tgmath.h>

double two_e_int_8_7_2_2_2_2_1_11_11_1(double z12, double z34) {
  return (1382400 * (54 * pow(z12, 9) + 756 * pow(z12, 8) * z34 + 5354 * pow(z12, 7) * pow(z34, 2) +
                     25816 * pow(z12, 6) * pow(z34, 3) + 94094 * pow(z12, 5) * pow(z34, 4) +
                     37037 * pow(z12, 4) * pow(z34, 5) + 11368 * pow(z12, 3) * pow(z34, 6) +
                     2567 * pow(z12, 2) * pow(z34, 7) + 378 * z12 * pow(z34, 8) + 27 * pow(z34, 9))) /
         (7. * pow(z12, 6) * pow(z34, 5) * pow(z12 + z34, 14));
}