/*
** EPITECH PROJECT, 2018
** text
** File description:
** text
*/

#include "../include/header.h"

void    p_text(struct a *c)
{
    c->score = sfText_create();
    c->score_nb = sfText_create();
    sfText_setString(c->score, "SCORE : ");
    sfText_setString(c->score_nb, my_get_str(c));
    c->font = sfFont_createFromFile("./img/text.ttf");
    sfText_setFont(c->score, c->font);
    sfText_setFont(c->score_nb, c->font);
    sfText_setCharacterSize(c->score, 50);
    sfText_setCharacterSize(c->score_nb, 50);
    sfText_setPosition(c->score, (sfVector2f){1550, 50});
    sfText_setPosition(c->score_nb, (sfVector2f){1800, 50});
    sfRenderWindow_drawText(c->window, c->score, NULL);
    sfRenderWindow_drawText(c->window, c->score_nb, NULL);
}
