/*
** EPITECH PROJECT, 2019
** Project
** File description:
** getnbr
*/

#include <stdlib.h>
#include "../../include/my.h"

int my_getnbr(char *str)
{
    int i = 0;
    int n = 0;

    if (str[0] == '-' && str[1] != '\0')
        i++;
    while (str[i]) {
        n = n * 10;
        n = n + str[i] - 48;
        i++;
    }
    if (str[0] == '-')
        return (-1 * n);
    else
        return (n);
}
