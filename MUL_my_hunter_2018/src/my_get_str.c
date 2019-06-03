/*
** EPITECH PROJECT, 2018
** get
** File description:
** get
*/

#include "../include/header.h"

char    *positive(struct a *c, char *str, int b)
{
    int d = c->win;
    int y = 0;
    int md = 10;
    int div = 1;

    if (c->win > 0) {
        while (y < b) {
            str[y] = ((c->win % md) /div) + 48;
            y++;
            div = div * 10;
            md = md * 10;
        }
        str[y] = '\0';
        my_revstr(str);
    }
    return (str);
}

char    *my_get_str(struct a *c)
{
    int b = 0;
    int d = c->win;
    int y = 0;
    int md = 10;
    int div = 1;
    char *str;

    while (d > 0) {
        d = d / 10;
        b++;
    }
    str = malloc(sizeof(char) *b + 1);
    if (c->win == 0) {
        str[0] = '0';
        str[1] = '\0';
        my_revstr(str);
    }
    positive(c, str, b);
    return (str);
    free(str);
}
