/*
** EPITECH PROJECT, 2019
** Project
** File description:
** putstr
*/

#include <unistd.h>
#include <stddef.h>
#include "../../include/my.h"

void my_putstr(char *str)
{
    if (str != NULL){
        write(1, str, my_strlen(str));
    }
}
