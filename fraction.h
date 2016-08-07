//
// Created by Pedro Tôrres on 8/4/16.
//

#ifndef SCIENTIFIC_CALCULATOR_FRACTION_H
#define SCIENTIFIC_CALCULATOR_FRACTION_H

struct fraction {
    double numerator;
    double denominator;
};
typedef struct fraction fraction;

fraction fraction_constructor(double numerator, double denominator);

void fraction_add(fraction *x, fraction y);

void fraction_subtract(fraction *x, fraction y);

void fraction_multiply(fraction *x, fraction y);

void fraction_divide(fraction *x, fraction y);

void fraction_power(fraction *f, double power);

char *fraction_string(fraction f);

#endif //SCIENTIFIC_CALCULATOR_FRACTION_H
