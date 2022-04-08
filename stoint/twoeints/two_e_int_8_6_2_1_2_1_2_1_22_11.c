#include <tgmath.h>

double two_e_int_8_6_2_1_2_1_2_1_22_11(double z12, double z34) {
  return (-41472 *
          (588 * pow(z12, 10) + 7644 * pow(z12, 9) * z34 + 46029 * pow(z12, 8) * pow(z34, 2) +
           170313 * pow(z12, 7) * pow(z34, 3) + 433290 * pow(z12, 6) * pow(z34, 4) +
           320463 * pow(z12, 5) * pow(z34, 5) + 176579 * pow(z12, 4) * pow(z34, 6) + 70304 * pow(z12, 3) * pow(z34, 7) +
           19128 * pow(z12, 2) * pow(z34, 8) + 3185 * z12 * pow(z34, 9) + 245 * pow(z34, 10))) /
         (7. * pow(z12, 7) * pow(z34, 5) * pow(z12 + z34, 13));
}