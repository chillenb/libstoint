#include <tgmath.h>

double two_e_int_5_6_2_1_1_2_2_1_0_1(double z12, double z34) {
    return (864*sqrt(2)*(28*pow(z12,7) + 280*pow(z12,6)*z34 + 1244*pow(z12,5)*pow(z34,2) + 3200*pow(z12,4)*pow(z34,3) + 5160*pow(z12,3)*pow(z34,4) + 2133*pow(z12,2)*pow(z34,5) + 490*z12*pow(z34,6) + 49*pow(z34,7)))/(7.*pow(z12,4)*pow(z34,5)*pow(z12 + z34,10));
}