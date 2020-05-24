/*
** EPITECH PROJECT, 2019
** disp.c
** File description:
** 
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void space_disp(matrix_t *matrix, int k)
{
    if (k + 1 < matrix->i)
        printf("\t");
}

void disp_key(int **key_mx, matrix_t *matrix)
{
    printf("Key matrix:\n");
    for (int j = 0; j < matrix->i; j++) {
        for (int k = 0; k < matrix->i; k++) {
            printf("%i", key_mx[j][k]);
            space_disp(matrix, k);
        }
        printf("\n");
    }
}