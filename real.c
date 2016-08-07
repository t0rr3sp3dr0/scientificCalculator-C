//
// Created by Pedro Tôrres on 8/4/16.
//

#include "real.h"
#include <math.h>

void real_add(double *i, double j) {
    *i += j;
}

void real_subtract(double *i, double j) {
    *i -= j;
}

void real_multiply(double *i, double j) {
    *i *= j;
}

void real_divide(double *i, double j) {
    *i /= j;
}

void real_power(double *i, double j) {
    *i = pow(*i, j);
}
