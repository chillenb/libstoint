#include <tgmath.h>

double two_e_int_8_7_2_2_2_2_2_2_11_11(double z12, double z34) {
  return (172800 * (1176 * pow(z12, 13) + 16464 * pow(z12, 12) * z34 + 106872 * pow(z12, 11) * pow(z34, 2) +
                    426048 * pow(z12, 10) * pow(z34, 3) + 1163720 * pow(z12, 9) * pow(z34, 4) +
                    2297008 * pow(z12, 8) * pow(z34, 5) + 3355352 * pow(z12, 7) * pow(z34, 6) +
                    3010007 * pow(z12, 6) * pow(z34, 7) + 2032618 * pow(z12, 5) * pow(z34, 8) +
                    1023389 * pow(z12, 4) * pow(z34, 9) + 373548 * pow(z12, 3) * pow(z34, 10) +
                    93567 * pow(z12, 2) * pow(z34, 11) + 14406 * z12 * pow(z34, 12) + 1029 * pow(z34, 13))) /
         (7. * pow(z12, 8) * pow(z34, 7) * pow(z12 + z34, 14));
}