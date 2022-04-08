#include <tgmath.h>

double two_e_int_7_6_3_1_3_1_0_0_11_11(double z12, double z34) {
  return (768 * sqrt(6) *
          (729 * pow(z12, 7) + 8748 * pow(z12, 6) * z34 + 42614 * pow(z12, 5) * pow(z34, 2) +
           94380 * pow(z12, 4) * pow(z34, 3) + 59280 * pow(z12, 3) * pow(z34, 4) + 20384 * pow(z12, 2) * pow(z34, 5) +
           3888 * z12 * pow(z34, 6) + 324 * pow(z34, 7))) /
         (5. * pow(z12, 5) * pow(z34, 4) * pow(z12 + z34, 12));
}