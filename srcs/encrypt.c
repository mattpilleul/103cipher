/*
** EPITECH PROJECT, 2019
** encrypt.c
** File description:
** 
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

int **ma_res(int **result, matrix_t *matrix)
{
    result = malloc(sizeof(int *) * (matrix->size/matrix->i + 1));
    for (int z = 0; z <= matrix->size/matrix->i + 1; z++)
        result[z] = malloc(sizeof(int) * (matrix->i + 1));
    return (result);
}

void encrypt2(int **key_mx, int **msg_mx, int **result, matrix_t *matrix)
{
    for (int w = 0; w < matrix->i; w++) {
        result[matrix->a][matrix->b] += key_mx[w][matrix->x] * \
        msg_mx[matrix->a][w];
    }
}

int **encrypt_1(int **key_mx, int **msg_mx, int **result, matrix_t *matrix)
{
    matrix->x = 0;

    for (matrix->a = 0; matrix->a < matrix->size/matrix->i + 1; matrix->a++) {
        for (matrix->b = 0; matrix->b < matrix->i; matrix->b++) {
            encrypt2(key_mx, msg_mx, result, matrix);
            matrix->x++;
        }
        matrix->x = 0;
    }
    return (result);
}

void disp_encrypt(int m, int n, matrix_t *matrix)
{
    if (n != matrix->size/matrix->i && m != matrix->i)
        printf(" ");
    else if (m + 1 < matrix->i)
        printf(" ");
}

void encrypt(int **key_mx, int **msg_mx, matrix_t *matrix)
{
    int **result = ma_res(result, matrix);

    result = encrypt_1(key_mx, msg_mx, result, matrix);
    printf("\nEncrypted message:\n");
    for (int n = 0; n < matrix->size/matrix->i + 1; n++) {
        for (int m = 0; m < matrix->i; m++) {
            printf("%i", result[n][m]);
            disp_encrypt(m, n, matrix);
        }
    }
    printf("\n");
}