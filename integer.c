//
// Created by Pedro Tôrres on 8/4/16.
//

#include <math.h>
#include "integer.h"

void integer_add(int *x, int y) {
    *x += y;
}

void integer_subtract(int *x, int y) {
    *x -= y;
}

void integer_multiply(int *x, int y) {
    *x *= y;
}

void integer_divide(int *x, int y) {
    *x /= y;
}

void integer_power(int *i, double power) {
    *i = (int) pow(*i, power);
}

void integer_module(int *x, int y) {
    *x %= y;
}
