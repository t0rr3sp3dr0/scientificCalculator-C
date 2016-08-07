//
// Created by Pedro Tôrres on 8/4/16.
//

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
#include "integer.h"
#include "fraction.h"
#include "real.h"
#include "complex.h"
#include "matrix.h"

int main() {
    while (1) {
        switch (menu_operation()) {
            case 1:
                // Integer
                operator_integer();
                break;
            case 2:
                // Fraction
                operator_fraction();
                break;
            case 3:
                // Real
                operator_real();
                break;
            case 4:
                // Complex
                operator_complex();
                break;
            case 5:
                // Matrix
                operator_matrix();
                break;
            default:
                return 0;
        }
    }
}

int menu_operation() {
    char in[CHAR_BIT];
    while (1) {
        printf("Selecione o tipo de entrada:\n");
        printf("1 - Números Inteiros\n");
        printf("2 - Frações\n");
        printf("3 - Números Reais\n");
        printf("4 - Números Complexos\n");
        printf("5 - Matrizes\n");
        printf("\n0 - Sair\n");
        printf("\n>: ");
        scanf("%s", in);
        printf("\n");
        int out = in[0] - '0';
        if (out >= 0 && out <= 5)
            return out;
        else
            printf("Opção inválida!\n\n");
    }
}

int menu_integer() {
    char in[CHAR_BIT];
    while (1) {
        printf("Selecione a operação:\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Potenciação\n");
        printf("5 - Divisão Inteira\n");
        printf("6 - Módulo\n");
        printf("\n0 - Voltar\n");
        printf("\n>: ");
        scanf("%s", in);
        printf("\n");
        int out = in[0] - '0';
        if (out >= 0 && out <= 6)
            return out;
        else
            printf("Opção inválida!\n\n");
    }
}

void operator_integer() {
    int result;
    char in[USHRT_MAX];
    printf("Entre com o 1º valor: ");
    scanf("%s", in);
    printf("\n");
    result = atoi(in);
    int keep_going = 1;
    while (keep_going) {
        switch (menu_integer()) {
            case 1:
                // Add
                printf("Entre com o próximo valor: ");
                scanf("%s", in);
                printf("\n");
                integer_add(&result, atoi(in));
                break;
            case 2:
                // Subtract
                printf("Entre com o próximo valor: ");
                scanf("%s", in);
                printf("\n");
                integer_subtract(&result, atoi(in));
                break;
            case 3:
                // Multiply
                printf("Entre com o próximo valor: ");
                scanf("%s", in);
                printf("\n");
                integer_multiply(&result, atoi(in));
                break;
            case 4:
                // Power
                printf("Entre com o próximo valor: ");
                scanf("%s", in);
                printf("\n");
                integer_power(&result, atoi(in));
                break;
            case 5:
                // Divide
                while (1) {
                    printf("Entre com o próximo valor: ");
                    scanf("%s", in);
                    printf("\n");
                    if (atoi(in) == 0)
                        printf("Valor inválido!\n\n");
                    else
                        break;
                }
                integer_divide(&result, atoi(in));
                break;
            case 6:
                // Module
                printf("Entre com o próximo valor: ");
                scanf("%s", in);
                printf("\n");
                integer_module(&result, atoi(in));
                break;
            default:
                keep_going = 0;
                break;
        }
        printf("Resultado: %d\n\n", result);
    }
}

int menu_fraction() {
    char in[CHAR_BIT];
    while (1) {
        printf("Selecione a operação:\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Potenciação\n");
        printf("5 - Divisão\n");
        printf("\n0 - Voltar\n");
        printf("\n>: ");
        scanf("%s", in);
        printf("\n");
        int out = in[0] - '0';
        if (out >= 0 && out <= 5)
            return out;
        else
            printf("Opção inválida!\n\n");
    }
}

void operator_fraction() {
    fraction result;
    char in[USHRT_MAX];
    double numerator;
    double denominator;
    printf("Entre com o 1º numerador: ");
    scanf("%s", in);
    printf("\n");
    numerator = atof(in);
    while (1) {
        printf("Entre com o 1º denominador: ");
        scanf("%s", in);
        printf("\n");
        denominator = atof(in);
        if (denominator == 0)
            printf("Denominador inválido!\n\n");
        else
            break;
    }
    result = fraction_constructor(numerator, denominator);
    int keep_going = 1;
    while (keep_going) {
        switch (menu_fraction()) {
            case 1:
                // Add
                printf("Entre com o próximo numerador: ");
                scanf("%s", in);
                printf("\n");
                numerator = atof(in);
                while (1) {
                    printf("Entre com o próximo denominador: ");
                    scanf("%s", in);
                    printf("\n");
                    denominator = atof(in);
                    if (denominator == 0)
                        printf("Denominador inválido!\n\n");
                    else
                        break;
                }
                fraction_add(&result, fraction_constructor(numerator, denominator));
                break;
            case 2:
                // Subtract
                printf("Entre com o próximo numerador: ");
                scanf("%s", in);
                printf("\n");
                numerator = atof(in);
                while (1) {
                    printf("Entre com o próximo denominador: ");
                    scanf("%s", in);
                    printf("\n");
                    denominator = atof(in);
                    if (denominator == 0)
                        printf("Denominador inválido!\n\n");
                    else
                        break;
                }
                fraction_subtract(&result, fraction_constructor(numerator, denominator));
                break;
            case 3:
                // Multiply
                printf("Entre com o próximo numerador: ");
                scanf("%s", in);
                printf("\n");
                numerator = atof(in);
                while (1) {
                    printf("Entre com o próximo denominador: ");
                    scanf("%s", in);
                    printf("\n");
                    denominator = atof(in);
                    if (denominator == 0)
                        printf("Denominador inválido!\n\n");
                    else
                        break;
                }
                fraction_multiply(&result, fraction_constructor(numerator, denominator));
                break;
            case 4:
                // Power
                while (1) {
                    printf("Entre com o próximo valor: ");
                    scanf("%s", in);
                    printf("\n");
                    fraction original = result;
                    fraction_power(&result, atof(in));
                    if (isnan(result.numerator) || isnan(result.denominator)) {
                        result = original;
                        printf("Valor inválido!\n\n");
                    } else
                        break;
                }
                break;
            case 5:
                // Divide
                while (1) {
                    printf("Entre com o próximo numerador: ");
                    scanf("%s", in);
                    printf("\n");
                    numerator = atof(in);
                    if (numerator == 0)
                        printf("Numerador inválido!\n\n");
                    else
                        break;
                }
                while (1) {
                    printf("Entre com o próximo denominador: ");
                    scanf("%s", in);
                    printf("\n");
                    denominator = atof(in);
                    if (denominator == 0)
                        printf("Denominador inválido!\n\n");
                    else
                        break;
                }
                fraction_divide(&result, fraction_constructor(numerator, denominator));
                break;
            default:
                keep_going = 0;
                break;
        }
        char *string = fraction_string(result);
        printf("Resultado: %s\n\n", string);
        free(string);
    }
}

int menu_real() {
    return menu_fraction();
}

void operator_real() {
    double result;
    char in[USHRT_MAX];
    printf("Entre com o 1º valor: ");
    scanf("%s", in);
    printf("\n");
    result = atof(in);
    int keep_going = 1;
    while (keep_going) {
        switch (menu_real()) {
            case 1:
                // Add
                printf("Entre com o próximo valor: ");
                scanf("%s", in);
                printf("\n");
                real_add(&result, atof(in));
                break;
            case 2:
                // Subtract
                printf("Entre com o próximo valor: ");
                scanf("%s", in);
                printf("\n");
                real_subtract(&result, atof(in));
                break;
            case 3:
                // Multiply
                printf("Entre com o próximo valor: ");
                scanf("%s", in);
                printf("\n");
                real_multiply(&result, atof(in));
                break;
            case 4:
                // Power
                while (1) {
                    printf("Entre com o próximo valor: ");
                    scanf("%s", in);
                    printf("\n");
                    double original = result;
                    real_power(&result, atof(in));
                    if (isnan(result)) {
                        result = original;
                        printf("Valor inválido!\n\n");
                    } else
                        break;
                }
                break;
            case 5:
                // Divide
                while (1) {
                    printf("Entre com o próximo valor: ");
                    scanf("%s", in);
                    printf("\n");
                    if (atof(in) == 0)
                        printf("Valor inválido!\n\n");
                    else
                        break;
                }
                real_divide(&result, atof(in));
                break;
            default:
                keep_going = 0;
                break;
        }
        printf("Resultado: %lg\n\n", result);
    }
}

int menu_complex() {
    return menu_fraction();
}

void operator_complex() {
    double complex result;
    char in[USHRT_MAX];
    double real;
    double imag;
    printf("Entre com a 1º parte real: ");
    scanf("%s", in);
    printf("\n");
    real = atof(in);
    printf("Entre com a 1º parte imaginaria: ");
    scanf("%s", in);
    printf("\n");
    imag = atof(in);
    result = complex_constructor(real, imag);
    int keep_going = 1;
    while (keep_going) {
        switch (menu_complex()) {
            case 1:
                // Add
                printf("Entre com a próxima parte real: ");
                scanf("%s", in);
                printf("\n");
                real = atof(in);
                printf("Entre com a próxima parte imaginaria: ");
                scanf("%s", in);
                printf("\n");
                imag = atof(in);
                complex_add(&result, complex_constructor(real, imag));
                break;
            case 2:
                // Subtract
                printf("Entre com a próxima parte real: ");
                scanf("%s", in);
                printf("\n");
                real = atof(in);
                printf("Entre com a próxima parte imaginaria: ");
                scanf("%s", in);
                printf("\n");
                imag = atof(in);
                complex_subtract(&result, complex_constructor(real, imag));
                break;
            case 3:
                // Multiply
                printf("Entre com a próxima parte real: ");
                scanf("%s", in);
                printf("\n");
                real = atof(in);
                printf("Entre com a próxima parte imaginaria: ");
                scanf("%s", in);
                printf("\n");
                imag = atof(in);
                complex_multiply(&result, complex_constructor(real, imag));
                break;
            case 4:
                // Power
                printf("Entre com o próximo valor: ");
                scanf("%s", in);
                printf("\n");
                complex_power(&result, atof(in));
                break;
            case 5:
                // Divide
                while (1) {
                    printf("Entre com a próxima parte real: ");
                    scanf("%s", in);
                    printf("\n");
                    real = atof(in);
                    printf("Entre com a próxima parte imaginaria: ");
                    scanf("%s", in);
                    printf("\n");
                    imag = atof(in);
                    if (real == 0 && imag == 0)
                        printf("Combinação de valores inválida!\n\n");
                    else
                        break;
                }
                complex_divide(&result, complex_constructor(real, imag));
                break;
            default:
                keep_going = 0;
                break;
        }
        char *string = complex_string(result);
        printf("Resultado: %s\n\n", string);
        free(string);
    }
}

int menu_matrix() {
    char in[CHAR_BIT];
    while (1) {
        printf("Selecione a operação:\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Potenciação\n");
        printf("\n0 - Voltar\n");
        printf("\n>: ");
        scanf("%s", in);
        printf("\n");
        int out = in[0] - '0';
        if (out >= 0 && out <= 4)
            return out;
        else
            printf("Opção inválida!\n\n");
    }
}

void operator_matrix() {
    matrix result;
    char in[USHRT_MAX];
    int m;
    int n;
    while (1) {
        printf("Entre com o número de linhas da 1ª matriz: ");
        scanf("%s", in);
        m = atoi(in);
        printf("\n");
        if (m == 0)
            printf("Valor inválido!\n\n");
        else
            break;
    }
    while (1) {
        printf("Entre com o número de colunas da 1ª matriz: ");
        scanf("%s", in);
        n = atoi(in);
        printf("\n");
        if (n == 0)
            printf("Valor inválido!\n\n");
        else
            break;
    }
    result = matrix_constructor(m, n);
    printf("Entre com os elementos da 1ª matriz, separando-os por espaços e/ou quebras de linha:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            scanf("%s", in);
            result.table[i][j] = atof(in);
        }
    printf("\n");
    int keep_going = 1;
    while (keep_going) {
        matrix next;
        switch (menu_matrix()) {
            case 1:
                // Add
                while (1) {
                    while (1) {
                        printf("Entre com o número de linhas da proxima matriz: ");
                        scanf("%s", in);
                        m = atoi(in);
                        printf("\n");
                        if (m == 0)
                            printf("Valor inválido!\n\n");
                        else
                            break;
                    }
                    while (1) {
                        printf("Entre com o número de colunas da proxima matriz: ");
                        scanf("%s", in);
                        n = atoi(in);
                        printf("\n");
                        if (n == 0)
                            printf("Valor inválido!\n\n");
                        else
                            break;
                    }
                    next = matrix_constructor(m, n);
                    if (!matrix_can_add(result, next))
                        printf("Não é possivel fazer a operação desejada com as matrizes de ordens previamente informadas!\n\n");
                    else
                        break;
                }
                printf("Entre com os elementos da proxima matriz, separando-os por espaços e/ou quebras de linha:\n");
                for (int i = 0; i < m; i++)
                    for (int j = 0; j < n; j++) {
                        scanf("%s", in);
                        next.table[i][j] = atof(in);
                    }
                printf("\n");
                matrix_add(&result, next);
                break;
            case 2:
                // Subtract
                while (1) {
                    while (1) {
                        printf("Entre com o número de linhas da proxima matriz: ");
                        scanf("%s", in);
                        m = atoi(in);
                        printf("\n");
                        if (m == 0)
                            printf("Valor inválido!\n\n");
                        else
                            break;
                    }
                    while (1) {
                        printf("Entre com o número de colunas da proxima matriz: ");
                        scanf("%s", in);
                        n = atoi(in);
                        printf("\n");
                        if (n == 0)
                            printf("Valor inválido!\n\n");
                        else
                            break;
                    }
                    next = matrix_constructor(m, n);
                    if (!matrix_can_subtract(result, next))
                        printf("Não é possivel fazer a operação desejada com as matrizes de ordens previamente informadas!\n\n");
                    else
                        break;
                }
                printf("Entre com os elementos da proxima matriz, separando-os por espaços e/ou quebras de linha:\n");
                for (int i = 0; i < m; i++)
                    for (int j = 0; j < n; j++) {
                        scanf("%s", in);
                        next.table[i][j] = atof(in);
                    }
                printf("\n");
                matrix_subtract(&result, next);
                break;
            case 3:
                // Multiply
                while (1) {
                    while (1) {
                        printf("Entre com o número de linhas da proxima matriz: ");
                        scanf("%s", in);
                        m = atoi(in);
                        printf("\n");
                        if (m == 0)
                            printf("Valor inválido!\n\n");
                        else
                            break;
                    }
                    while (1) {
                        printf("Entre com o número de colunas da proxima matriz: ");
                        scanf("%s", in);
                        n = atoi(in);
                        printf("\n");
                        if (n == 0)
                            printf("Valor inválido!\n\n");
                        else
                            break;
                    }
                    next = matrix_constructor(m, n);
                    if (!matrix_can_multiply(result, next))
                        printf("Não é possivel fazer a operação desejada com as matrizes de ordens previamente informadas!\n\n");
                    else
                        break;
                }
                printf("Entre com os elementos da proxima matriz, separando-os por espaços e/ou quebras de linha:\n");
                for (int i = 0; i < m; i++)
                    for (int j = 0; j < n; j++) {
                        scanf("%s", in);
                        next.table[i][j] = atof(in);
                    }
                printf("\n");
                matrix_multiply(&result, next);
                break;
            case 4:
                // Power
                if (matrix_can_power(result)) {
                    while (1) {
                        printf("Entre com o próximo valor: ");
                        scanf("%s", in);
                        printf("\n");
                        if (atoll(in) >= 0) {
                            matrix_power(&result, (unsigned long long int) atoll(in));
                            break;
                        } else
                            printf("Valor inválido!\n\n");
                    }
                } else
                    printf("Não é possivel realizar a operação desejada com a matrix atual!\n\n");
                break;
            default:
                keep_going = 0;
                break;
        }
        matrix_destructor(&next);
        printf("Resultado:\n\n");
        matrix_print(result);
        printf("\n");
        if (!keep_going)
            matrix_destructor(&result);
    }
}
