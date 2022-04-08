#include <tgmath.h>

double two_e_int_7_7_3_1_3_1_1_0_11_0(double z12, double z34) {
  return (-4608 * (1296 * pow(z12, 8) + 16848 * pow(z12, 7) * z34 + 107963 * pow(z12, 6) * pow(z34, 2) +
                   460031 * pow(z12, 5) * pow(z34, 3) + 1462890 * pow(z12, 4) * pow(z34, 4) +
                   460031 * pow(z12, 3) * pow(z34, 5) + 107963 * pow(z12, 2) * pow(z34, 6) + 16848 * z12 * pow(z34, 7) +
                   1296 * pow(z34, 8))) /
         (5. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 13));
}