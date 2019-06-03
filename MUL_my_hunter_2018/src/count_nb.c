/*
** EPITECH PROJECT, 2018
** count
** File description:
** count
*/

#include "../include/header.h"

int    count_nb(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}
