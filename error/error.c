/*
** EPITECH PROJECT, 2019
** error.c
** File description:
**
*/

#include "../include/my.h"
#include <stdlib.h>
#include <stdio.h>

void man_disp(void)
{
    printf("USAGE\n   ./103cipher message key flag\n\nDESCRIPTION\n   ");
    printf("message     a message, made of ASCII characters\n   key      ");
    printf("   the encryption key, made of ASCII characters\n   flag     ");
    printf("   0 for the message to be encrypted, 1 to be decrypted\n");
    exit(0);
}

void check_error(int ac, char **av)
{
    if (ac == 2 && av[1] != NULL && av[1][0] == '-' && av[1][1] == 'h') {
        man_disp();
    } else if (ac != 4) {
        printf("Wrong number of arguments.\n");
        exit(84);
    }
    if (my_getnbr(av[3]) != 0 && my_getnbr(av[3]) != 1) {
        printf("0 to encrypt, 1 to decrypt.");
        exit(84);
    }
}
