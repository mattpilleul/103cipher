/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** 
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

int main(int ac, char **av)
{
    int **key_mx;
    int **msg_mx;
    matrix_t *matrix = malloc(sizeof(matrix_t));

    check_error(ac, av);
    key_mx = fill_key_mx(av, matrix);
    msg_mx = fill_msg_mx(av, matrix);
    if (my_getnbr(av[3]) == 0)
        encrypt(key_mx, msg_mx, matrix);
    return (0);
}