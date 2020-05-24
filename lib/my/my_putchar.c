/*
** EPITECH PROJECT, 2019
** Project
** File description:
** pucthar
*/

#include <unistd.h>
#include "./../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
