#include <cmath>
#include "stoint/auxiliary.h"

extern "C" {

double ones(double z1, double z2, double z3, double z4) {
    return QNormCoef<1,1,1,1>(z1,z2,z3,z4);
}
}
