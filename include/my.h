/*
** EPITECH PROJECT, 2019
** Project
** File description:
** functions
*/

#ifndef MY_H
#define MY_H

#include <stddef.h>

typedef struct matrix {
    int i;
    int size;
    int a;
    int b;
    int x;
}matrix_t;

void my_putchar(char);
int my_strlen(char *);
void disp_key(int **key_mx, matrix_t *matrix);
int my_getnbr(char *str);
void encrypt(int **key_mx, int **msg_mx, matrix_t *matrix);
void check_error(int ac, char **av);
int **fill_msg_mx(char **av, matrix_t *matrix);
int **fill_key_mx(char **av, matrix_t *matrix);
void error(int, char **, int);
void my_putstr(char *);

#endif
