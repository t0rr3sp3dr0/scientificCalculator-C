//
// Created by Pedro Tôrres on 8/4/16.
//

#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "fraction.h"

fraction fraction_constructor(double numerator, double denominator) {
    fraction f;
    f.numerator = numerator;
    f.denominator = denominator;
    return f;
}

void fraction_add(fraction *x, fraction y) {
    x->numerator *= y.denominator;
    y.numerator *= x->denominator;
    x->numerator += y.numerator;
    x->denominator *= y.denominator;
}

void fraction_subtract(fraction *x, fraction y) {
    x->numerator *= y.denominator;
    y.numerator *= x->denominator;
    x->numerator -= y.numerator;
    x->denominator *= y.denominator;
}

void fraction_multiply(fraction *x, fraction y) {
    x->numerator *= y.numerator;
    x->denominator *= y.denominator;
}

void fraction_divide(fraction *x, fraction y) {
    x->numerator *= y.denominator;
    x->denominator *= y.numerator;
}

void fraction_power(fraction *f, double power) {
    f->numerator = pow(f->numerator, power);
    f->denominator = pow(f->denominator, power);
}

char *fraction_string(fraction f) {
    char *out = (char *) malloc(CHAR_MAX * sizeof(char));
    sprintf(out, "%lg / %lg", f.numerator, f.denominator);
    return out;
}
