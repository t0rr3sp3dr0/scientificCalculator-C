//
// Created by Pedro Tôrres on 8/4/16.
//

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "integer.h"

int main() {
    while (1) {
        switch (menu_operation()) {
            case 1:
                // Integer
                operator_integer();
                break;
            case 2:
                // Fraction
                break;
            case 3:
                // Real
                break;
            case 4:
                // Complex
                break;
            case 5:
                // Matrix
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
    printf("Entre com o 1º valor:\t");
    scanf("%s", in);
    printf("\n");
    result = atoi(in);
    int keep_going = 1;
    while (keep_going) {
        switch (menu_integer()) {
            case 1:
                // Add
                printf("Entre com o próximo valor:\t");
                scanf("%s", in);
                printf("\n");
                int value = atoi(in);
                integer_add(&result, value);
                break;
            case 2:
                // Subtract
                printf("Entre com o próximo valor:\t");
                scanf("%s", in);
                printf("\n");
                integer_subtract(&result, atoi(in));
                break;
            case 3:
                // Multiply
                printf("Entre com o próximo valor:\t");
                scanf("%s", in);
                printf("\n");
                integer_multiply(&result, atoi(in));
                break;
            case 4:
                // Power
                printf("Entre com o próximo valor:\t");
                scanf("%s", in);
                printf("\n");
                integer_power(&result, atoi(in));
                break;
            case 5:
                // Divide
                printf("Entre com o próximo valor:\t");
                scanf("%s", in);
                printf("\n");
                integer_divide(&result, atoi(in));
                break;
            case 6:
                // Module
                printf("Entre com o próximo valor:\t");
                scanf("%s", in);
                printf("\n");
                integer_module(&result, atoi(in));
                break;
            default:
                keep_going = 0;
                break;
        }
        printf("Resultado:\t%d\n\n", result);
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
        scanf("%s\n", in);
        printf("\n");
        int out = in[0] - '0';
        if (out >= 0 && out <= 5)
            return out;
        else
            printf("Opção inválida!\n\n");
    }
}

void operator_fraction() {
    int result;
    char *in = (char *) malloc(USHRT_MAX * sizeof(char));
    printf("Entre com o 1º valor:\t");
    scanf("%s", in);
    int keep_going = 1;
    while (keep_going) {
        switch (menu_fraction()) {
            case 1:
                // Add
                break;
            case 2:
                // Subtract
                break;
            case 3:
                // Multiply
                break;
            case 4:
                // Power
                break;
            case 5:
                // Divide
                break;
            default:
                keep_going = 0;
                break;
        }
    }
}

int menu_real() {
    return menu_fraction();
}

void operator_real() {
    int result;
    char *in = (char *) malloc(USHRT_MAX * sizeof(char));
    printf("Entre com o 1º valor:\t");
    scanf("%s", in);
    int keep_going = 1;
    while (keep_going) {
        switch (menu_real()) {
            case 1:
                // Add
                break;
            case 2:
                // Subtract
                break;
            case 3:
                // Multiply
                break;
            case 4:
                // Power
                break;
            case 5:
                // Divide
                break;
            default:
                keep_going = 0;
                break;
        }
    }
}

int menu_complex() {
    return menu_fraction();
}

void operator_complex() {
    int result;
    char *in = (char *) malloc(USHRT_MAX * sizeof(char));
    printf("Entre com o 1º valor:\t");
    scanf("%s", in);
    int keep_going = 1;
    while (keep_going) {
        switch (menu_complex()) {
            case 1:
                // Add
                break;
            case 2:
                // Subtract
                break;
            case 3:
                // Multiply
                break;
            case 4:
                // Power
                break;
            case 5:
                // Divide
                break;
            default:
                keep_going = 0;
                break;
        }
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
        scanf("%s\n", in);
        printf("\n");
        int out = in[0] - '0';
        if (out >= 0 && out <= 4)
            return out;
        else
            printf("Opção inválida!\n\n");
    }
}

void operator_matrix() {
    int result;
    char *in = (char *) malloc(USHRT_MAX * sizeof(char));
    printf("Entre com o 1º valor:\t");
    scanf("%s", in);
    int keep_going = 1;
    while (keep_going) {
        switch (menu_matrix()) {
            case 1:
                // Add
                break;
            case 2:
                // Subtract
                break;
            case 3:
                // Multiply
                break;
            case 4:
                // Power
                break;
            default:
                keep_going = 0;
                break;
        }
    }
}
