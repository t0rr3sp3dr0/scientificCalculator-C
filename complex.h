//
// Created by Pedro Tôrres on 8/4/16.
//

#ifndef SCIENTIFIC_CALCULATOR_COMPLEX_H
#define SCIENTIFIC_CALCULATOR_COMPLEX_H

#include <complex.h>

double complex complex_constructor(double real, double imag);

void complex_add(double complex *x, double complex y);

void complex_subtract(double complex *x, double complex y);

void complex_multiply(double complex *x, double complex y);

void complex_divide(double complex *x, double complex y);

void complex_power(double complex *c, double power);

char *complex_string(double complex c);

#endif //SCIENTIFIC_CALCULATOR_COMPLEX_H
