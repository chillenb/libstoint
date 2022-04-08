#include <tgmath.h>

double two_e_int_7_7_3_1_1_3_0_0_11_11(double z12, double z34) {
  return (3072 * sqrt(6) *
          (729 * pow(z12, 8) + 9477 * pow(z12, 7) * z34 + 54112 * pow(z12, 6) * pow(z34, 2) +
           172744 * pow(z12, 5) * pow(z34, 3) + 306735 * pow(z12, 4) * pow(z34, 4) +
           172744 * pow(z12, 3) * pow(z34, 5) + 54112 * pow(z12, 2) * pow(z34, 6) + 9477 * z12 * pow(z34, 7) +
           729 * pow(z34, 8))) /
         (5. * pow(z12, 5) * pow(z34, 5) * pow(z12 + z34, 13));
}