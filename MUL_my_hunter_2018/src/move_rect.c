/*
** EPITECH PROJECT, 2018
** move
** File description:
** move
*/

#include "../include/header.h"

void    move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left >= 330)
        rect->left = 0;
}
