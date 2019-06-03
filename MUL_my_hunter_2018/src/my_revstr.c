/*
** EPITECH PROJECT, 2018
** rev
** File description:
** resv
*/

#include "../include/header.h"

char    *my_revstr(char *str)
{
    int i = 0;
    int a = count_nb(str) - 1;
    char c;

    while (a > i) {
        c = str[a];
        str[a] = str[i];
        str[i] = c;
        a--;
        i++;
    }
    return (str);
}
