/*
** EPITECH PROJECT, 2018
** scale
** File description:
** scale
*/

#include "../include/header.h"

void    scale_and_pos(struct a *c)
{
    sfVector2f life = {100, 870};
    sfVector2f restart = {1100, 700};
    sfVector2f reset = {100, 660};
    sfVector2f s_reset = {0.32, 0.32};
    sfVector2f life1 = {1, 0.5};
    sfVector2f life2 = {0.5, 0.3};
    sfVector2f gm = {-350, -250};
    sfVector2f t_l = {0.1, 0.1};

    sfSprite_setScale(c->sprite2, c->pos);
    sfSprite_setScale(c->sprite3, life1);
    sfSprite_setScale(c->sprite4, life2);
    sfSprite_setScale(c->sprite7, s_reset);
    sfSprite_setScale(c->sprite2, t_l);
    sfSprite_setPosition(c->sprite3, life);
    sfSprite_setPosition(c->sprite5, gm);
    sfSprite_setPosition(c->sprite6, restart);
    sfSprite_setPosition(c->sprite7, reset);
}
