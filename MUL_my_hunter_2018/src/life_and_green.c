/*
** EPITECH PROJECT, 2018
** life
** File description:
** life
*/

#include "../include/header.h"

void    life_and_green(struct a *c)
{
    sfVector2f life1 = {0.4, 0.3};
    sfVector2f life2 = {0.3, 0.3};
    sfVector2f life3 = {0.2, 0.3};
    sfVector2f life4 = {0.1, 0.3};
    sfVector2f green = {105, 838};

    if (c->compteur == 0) {
        level(c);
        sfSprite_setPosition(c->sprite4, green);
        sfRenderWindow_drawSprite(c->window, c->sprite4, NULL);
    }
    one(c);
    two(c);
    tree(c);
    four(c);
}

void    one(struct a *c)
{
    sfVector2f life1 = {0.4, 0.3};
    sfVector2f life2 = {0.3, 0.3};
    sfVector2f life3 = {0.2, 0.3};
    sfVector2f life4 = {0.1, 0.3};
    sfVector2f green = {105, 838};

    if (c->compteur == 1) {
        level(c);
        sfSprite_setScale(c->sprite4, life1);
        sfSprite_setPosition(c->sprite4, green);
        sfRenderWindow_drawSprite(c->window, c->sprite4, NULL);
    }
}

void    two(struct a *c)
{
    sfVector2f life1 = {0.4, 0.3};
    sfVector2f life2 = {0.3, 0.3};
    sfVector2f life3 = {0.2, 0.3};
    sfVector2f life4 = {0.1, 0.3};
    sfVector2f green = {105, 838};

    if (c->compteur == 2) {
        level(c);
        sfSprite_setScale(c->sprite4, life2);
        sfSprite_setPosition(c->sprite4, green);
        sfRenderWindow_drawSprite(c->window, c->sprite4, NULL);
    }
}

void    tree(struct a *c)
{
    sfVector2f life1 = {0.4, 0.3};
    sfVector2f life2 = {0.3, 0.3};
    sfVector2f life3 = {0.2, 0.3};
    sfVector2f life4 = {0.1, 0.3};
    sfVector2f green = {105, 838};

    if (c->compteur == 3) {
        level(c);
        sfSprite_setScale(c->sprite4, life3);
        sfSprite_setPosition(c->sprite4, green);
        sfRenderWindow_drawSprite(c->window, c->sprite4, NULL);
    }
}

void    four(struct a *c)
{
    sfVector2f life1 = {0.4, 0.3};
    sfVector2f life2 = {0.3, 0.3};
    sfVector2f life3 = {0.2, 0.3};
    sfVector2f life4 = {0.1, 0.3};
    sfVector2f green = {105, 838};

    if (c->compteur == 4) {
        level(c);
        sfSprite_setScale(c->sprite4, life4);
        sfSprite_setPosition(c->sprite4, green);
        sfRenderWindow_drawSprite(c->window, c->sprite4, NULL);
    }
}
