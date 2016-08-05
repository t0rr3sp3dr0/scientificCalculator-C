//
// Created by Pedro Tôrres on 8/4/16.
//

#include <complex.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

double complex complex_constructor(double real, double imag) {
    return real + imag * I;
}

void complex_add(double complex *x, double complex y) {
    *x += y;
}

void complex_subtract(double complex *x, double complex y) {
    *x -= y;
}

void complex_multiply(double complex *x, double complex y) {
    *x *= y;
}

void complex_devide(double complex *x, double complex y) {
    *x /= y;
}

void complex_power(double complex *c, double power) {
    *c = cpow(*c, power);
}

char *complex_string(double complex *c) {
    char *out = (char *) malloc(CHAR_MAX * sizeof(char));
    sprintf(out, "%f + %fi", creal(*c), cimag(*c));
    return out;
}
