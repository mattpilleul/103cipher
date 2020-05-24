/*
** EPITECH PROJECT, 2019
** put_to_mx.c
** File description:
** 
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

int **ma_msg(int **msg_mx, char **av, matrix_t *matrix)
{
    matrix->size = my_strlen(av[1]);

    msg_mx = malloc(sizeof(int *) * (matrix->size/matrix->i + 1));
    for (int z = 0; z <= matrix->size/matrix->i + 1; z++)
        msg_mx[z] = malloc(sizeof(int) * (matrix->i + 1));
    return (msg_mx);
}

int **fill_msg_mx(char **av, matrix_t *matrix)
{
    int k = 0;
    int j = 0;
    int m = 0;
    int **msg_mx;

    msg_mx = ma_msg(msg_mx, av, matrix);
    while (av[1][j]) {
        if (m == matrix->i) {
            k++;
            m = 0;
        }
        msg_mx[k][m] = av[1][j];
        m++;
        j++;
    }
    return (msg_mx);
}

int **ma_key(int **key_mx, matrix_t *matrix)
{
    key_mx = malloc(sizeof(int *) * matrix->i);
    for (int z = 0; z <= matrix->i; z++)
        key_mx[z] = malloc(sizeof(int) * matrix->i);
    return (key_mx);
}

int **fill_key_mx(char **av, matrix_t *matrix)
{
    matrix->i = 0;
    int k = 0;
    int j = 0;
    int m = 0;
    int **key_mx;
    int size1 = my_strlen(av[2]);

    while (size1 > matrix->i*matrix->i)
        matrix->i++;
    key_mx = ma_key(key_mx, matrix);
    while (av[2][j]) {
        if (m == matrix->i) {
            k++;
            m = 0;
        }
        key_mx[k][m] = av[2][j];
        m++;
        j++;
    }
    disp_key(key_mx, matrix);
    return (key_mx);
}
