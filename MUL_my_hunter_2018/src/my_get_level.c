/*
** EPITECH PROJECT, 2018
** get level
** File description:
** get level
*/

#include "../include/header.h"

char    *level_two(struct a *c, char *str)
{
    if (c->win >= 10) {
        str[0] = '2';
        str[1] = '\0';
    }
    return (str);
}

char    *level_tree(struct a *c, char *str)
{
    if (c->win >= 20) {
        str[0] = '3';
        str[1] = '\0';
    }
    return (str);
}

char    *level_four(struct a *c, char *str)
{
    if (c->win >= 30) {
        str[0] = '4';
        str[1] = '\0';
    }
    return (str);
}

char    *level_five(struct a *c, char *str)
{
    if (c->win >= 40) {
        str[0] = '5';
        str[1] = '\0';
    }
    return (str);
}

char    *my_get_level(struct a * c)
{
    char *str = malloc(sizeof(char) * 2);

    if (c->win >= 0) {
        str[0] = '1';
        str[1] = '\0';
    }
    level_two(c, str);
    level_tree(c, str);
    level_four(c, str);
    level_five(c, str);
    level_six(c, str);
    level_seven(c, str);
    level_eight(c, str);
    level_eight(c, str);
    return (str);
    free(str);
}
