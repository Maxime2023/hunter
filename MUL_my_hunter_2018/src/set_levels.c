/*
** EPITECH PROJECT, 2018
** levels
** File description:
** levels
*/

#include "../include/header.h"

char    *level_six(struct a *c, char *str)
{
    if (c->win >= 50) {
        str[0] = '6';
        str[1] = '\0';
    }
    return (str);
}

char    *level_seven(struct a *c, char *str)
{
    if (c->win >= 60) {
        str[0] = '7';
        str[1] = '\0';
    }
    return (str);
}

char    *level_eight(struct a *c, char *str)
{
    if (c->win >= 70) {
        str[0] = '8';
        str[1] = '\0';
    }
    return (str);
}

char    *level_nine(struct a *c, char *str)
{
    if (c->win >= 80) {
        str[0] = '9';
        str[1] = '\0';
    }
    return (str);
}
