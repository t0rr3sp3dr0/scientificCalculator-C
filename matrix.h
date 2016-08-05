//
// Created by Pedro Tôrres on 8/4/16.
//

#ifndef SCIENTIFIC_CALCULATOR_MATRIX_H
#define SCIENTIFIC_CALCULATOR_MATRIX_H

struct matrix {
    int m;
    int n;
    double **table;
};
typedef struct matrix matrix;

matrix matrix_constructor(int m, int n);

int matrix_can_add(matrix x, matrix y);

void matrix_add(matrix *x, matrix y);

int matrix_can_subtract(matrix x, matrix y);

void matrix_subtract(matrix *x, matrix y);

int matrix_can_multiply(matrix x, matrix y);

void matrix_multiply(matrix *x, matrix y);

int matrix_can_power(matrix m);

void matrix_power(matrix *m, unsigned int power);

void matrix_print(matrix *m);

#endif //SCIENTIFIC_CALCULATOR_MATRIX_H
