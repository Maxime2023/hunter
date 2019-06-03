/*
** EPITECH PROJECT, 2018
** calc
** File description:
** calc
*/

#include "../include/header.h"

void    calc_time(struct a *c)
{
    c->bird.x += 2 + c->vitesse.x;
    if (c->bird.x > 1920) {
        c->compteur++;
        c->bird.x = 0;
        c->bird.y = rand_nb();
    }
    sfRenderWindow_drawSprite(c->window, c->sprite, NULL);
    c->time = sfClock_getElapsedTime(c->clock);
    c->seconds = c->time.microseconds / 100000.0;
    if (c->seconds > 1.0) {
        move_rect(&c->rect, 110, 330);
        sfClock_restart(c->clock);
    }
}
