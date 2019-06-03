/*
** EPITECH PROJECT, 2018
** level
** File description:
** level
*/

#include "../include/header.h"

void    level(struct a *c)
{
    c->score = sfText_create();
    c->score_nb = sfText_create();
    sfText_setString(c->score, "level");
    sfText_setString(c->score_nb, my_get_level(c));
    c->font = sfFont_createFromFile("./img/text.ttf");
    sfText_setFont(c->score, c->font);
    sfText_setFont(c->score_nb, c->font);
    sfText_setCharacterSize(c->score, 60);
    sfText_setCharacterSize(c->score_nb, 60);
    sfText_setPosition(c->score, (sfVector2f){1600, 880});
    sfText_setPosition(c->score_nb, (sfVector2f){1830, 880});
    sfRenderWindow_drawText(c->window, c->score, NULL);
    sfRenderWindow_drawText(c->window, c->score_nb, NULL);
}
