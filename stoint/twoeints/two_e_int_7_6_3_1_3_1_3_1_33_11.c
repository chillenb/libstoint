#include <tgmath.h>

double two_e_int_7_6_3_1_3_1_3_1_33_11(double z12, double z34) {
  return (768 * (729 * pow(z12, 7) + 8748 * pow(z12, 6) * z34 + 48389 * pow(z12, 5) * pow(z34, 2) +
                 163680 * pow(z12, 4) * pow(z34, 3) + 71880 * pow(z12, 3) * pow(z34, 4) +
                 21434 * pow(z12, 2) * pow(z34, 5) + 3888 * z12 * pow(z34, 6) + 324 * pow(z34, 7))) /
         (pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}