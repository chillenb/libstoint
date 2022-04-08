#include <tgmath.h>

double two_e_int_8_8_3_2_3_2_3_2_11_0(double z12, double z34) {
  return (-829440 * sqrt(10) *
          (297 * pow(z12, 12) + 4455 * pow(z12, 11) * z34 + 31064 * pow(z12, 10) * pow(z34, 2) +
           133320 * pow(z12, 9) * pow(z34, 3) + 393025 * pow(z12, 8) * pow(z34, 4) +
           841711 * pow(z12, 7) * pow(z34, 5) + 1355445 * pow(z12, 6) * pow(z34, 6) +
           841711 * pow(z12, 5) * pow(z34, 7) + 393025 * pow(z12, 4) * pow(z34, 8) +
           133320 * pow(z12, 3) * pow(z34, 9) + 31064 * pow(z12, 2) * pow(z34, 10) + 4455 * z12 * pow(z34, 11) +
           297 * pow(z34, 12))) /
         (11. * pow(z12, 7) * pow(z34, 7) * pow(z12 + z34, 15));
}