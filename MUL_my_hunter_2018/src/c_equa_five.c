/*
** EPITECH PROJECT, 2018
** 5
** File description:
** 5
*/

#include "../include/header.h"

char    *my_get_str_two(struct a * c)
{
    int b = 0;
    int d = c->best_score;
    int y = 0;
    int md = 10;
    int div = 1;
    char *str;

    while (d > 0) {
        d = d / 10;
        b++;
    }
    str = malloc(sizeof(char) *b + 1);
    for (y = 0; y < b; y++) {
        str[y] = ((c->best_score % md) /div) + 48;
        div = div * 10;
        md = md * 10;
    }
    str[y] = '\0';
    return (my_revstr(str));
    free(str);
}

void    high_score(struct a *c)
{
    c->score = sfText_create();
    c->score_nb = sfText_create();
    sfText_setString(c->score, "best score : ");
    sfText_setString(c->score_nb, my_get_str_two(c));
    c->font = sfFont_createFromFile("./img/text.ttf");
    sfText_setFont(c->score, c->font);
    sfText_setFont(c->score_nb, c->font);
    sfText_setCharacterSize(c->score, 50);
    sfText_setCharacterSize(c->score_nb, 50);
    sfText_setPosition(c->score, (sfVector2f){100, 50});
    sfText_setPosition(c->score_nb, (sfVector2f){550, 50});
    sfRenderWindow_drawText(c->window, c->score, NULL);
    sfRenderWindow_drawText(c->window, c->score_nb, NULL);
}
int    c_equa_five(struct a *c)
{
    sfVector2f gm = {-350, -250};
    sfVector2f tej_green = {-350, -250};

    if (c->compteur == 5) {
        sfSprite_setPosition(c->sprite2, gm);
        sfSprite_setTexture(c->sprite5, c->texture5, sfTrue);
        sfSprite_setTexture(c->sprite6, c->texture6, sfTrue);
        sfSprite_setTexture(c->sprite7, c->texture7, sfTrue);
        sfRenderWindow_drawSprite(c->window, c->sprite5, NULL);
        sfRenderWindow_drawSprite(c->window, c->sprite6, NULL);
        sfRenderWindow_drawSprite(c->window, c->sprite7, NULL);
        c->bird.x = -200;
        c->vitesse.x = 0;
        sfSprite_setPosition(c->sprite3, tej_green);
        sfRenderWindow_drawSprite(c->window, c->sprite2, NULL);
        high_score(c);
    }
    return (0);
}
