#include <tgmath.h>

double two_e_int_7_6_2_2_2_2_0_0_22_22(double z12, double z34) {
  return (17280 *
          (245 * pow(z12, 11) + 2940 * pow(z12, 10) * z34 + 16098 * pow(z12, 9) * pow(z34, 2) +
           53036 * pow(z12, 8) * pow(z34, 3) + 116743 * pow(z12, 7) * pow(z34, 4) + 180840 * pow(z12, 6) * pow(z34, 5) +
           159760 * pow(z12, 5) * pow(z34, 6) + 101878 * pow(z12, 4) * pow(z34, 7) + 45816 * pow(z12, 3) * pow(z34, 8) +
           13828 * pow(z12, 2) * pow(z34, 9) + 2520 * z12 * pow(z34, 10) + 210 * pow(z34, 11))) /
         (7. * pow(z12, 7) * pow(z34, 6) * pow(z12 + z34, 12));
}