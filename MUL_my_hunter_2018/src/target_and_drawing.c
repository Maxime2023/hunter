/*
** EPITECH PROJECT, 2018
** target
** File description:
** target
*/

#include "../include/header.h"

void    target_and_drawing(struct a *c)
{
    sfVector2f green = {105, 838};

    c->target.x = sfMouse_getPositionRenderWindow(c->window).x -32;
    c->target.y = sfMouse_getPositionRenderWindow(c->window).y - 32;
    sfSprite_setPosition(c->sprite2, c->target);
    sfRenderWindow_setMouseCursorVisible(c->window, sfFalse);
    sfSprite_setPosition(c->sprite1, c->bird);
    sfSprite_setTextureRect(c->sprite1, c->rect);
    sfRenderWindow_drawSprite(c->window, c->sprite1, NULL);
    life_and_green(c);
    sfRenderWindow_drawSprite(c->window, c->sprite3, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite2, NULL);
    sfRenderWindow_setFramerateLimit(c->window, 80);
    sfRenderWindow_display(c->window);
}
