//
// Created by Pedro Tôrres on 8/4/16.
//

#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

matrix matrix_constructor(int m, int n) {
    matrix t;
    t.m = m;
    t.n = n;
    t.table = (double **) malloc(m * sizeof(double *));
    for (int i = 0; i < n; i++)
        t.table[i] = (double *) malloc(n * sizeof(double));
    return t;
}

int matrix_can_add(matrix x, matrix y) {
    return x.m == y.m && x.n == y.n;
}

void matrix_add(matrix *x, matrix y) {
    for (int i = 0; i < x->m; i++)
        for (int j = 0; j < x->n; j++) {
            x->m += y.m;
            x->n += y.n;
        }
}

int matrix_can_subtract(matrix x, matrix y) {
    return matrix_can_add(x, y);
}

void matrix_subtract(matrix *x, matrix y) {
    for (int i = 0; i < x->m; i++)
        for (int j = 0; j < x->n; j++) {
            x->m -= y.m;
            x->n -= y.n;
        }
}

int matrix_can_multiply(matrix x, matrix y) {
    return x.n == y.m;
}

void matrix_multiply(matrix *x, matrix y) {
    matrix m = matrix_constructor(x->m, y.n);
    for (int i = 0; i < x->m; i++)
        for (int j = 0; j < y.n; j++) {
            m.table[i][j] = 0;
            for (int k = 0; k < x->n; k++)
                m.table[i][j] += x->table[i][k] * y.table[k][j];
        }
    x->table = m.table;
}

int matrix_can_power(matrix m) {
    return m.m == m.n;
}

void matrix_power(matrix *m, unsigned int power) {
    for (int i = 0; i < power - 1; i++)
        matrix_multiply(m, *m);
}

void matrix_print(matrix *m) {
    for (int i = 0; i < m->m; i++) {
        for (int j = 0; j < m->n; j++)
            printf("%f ", m->table[i][j]);
        printf("\n");
    }
}
