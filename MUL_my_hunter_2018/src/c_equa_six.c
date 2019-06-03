/*
** EPITECH PROJECT, 2018
** 6
** File description:
** 6
*/

#include "../include/header.h"

void    second_cond(struct a *c)
{
    sfVector2f life = {100, 870};
    sfVector2f green = {105, 838};
    sfVector2f life2 = {0.5, 0.3};

    if (c->event.mouseButton.x >= 100 && c->event.mouseButton.x <= 700) {
        if (c->event.mouseButton.y >= 660 && c->event.mouseButton.y <= 900) {
            c->compteur = 0;
            c->win = 0;
                sfSprite_setScale(c->sprite4, life2);
                sfSprite_setPosition(c->sprite4, green);
                sfRenderWindow_drawSprite(c->window, c->sprite4, NULL);
                sfSprite_setPosition(c->sprite3, life);
                sfRenderWindow_drawSprite(c->window, c->sprite3, NULL);
        }
    }
}
void    last_cond(struct a *c)
{
    sfVector2f life = {100, 870};
    sfVector2f green = {105, 838};
    sfVector2f life2 = {0.5, 0.3};

    if (c->event.mouseButton.x >= 0 && c->event.mouseButton.x <= 1920) {
        if (c->event.mouseButton.y >= 0 && c->event.mouseButton.y <= 650) {
            c->compteur = 5;
        }
    }
}
int    c_equa_six(struct a *c)
{
    sfVector2f life = {100, 870};
    sfVector2f green = {105, 838};
    sfVector2f life2 = {0.5, 0.3};

    if (c->compteur == 6) {
        if (c->event.mouseButton.x >= 1100 && c->event.mouseButton.x <= 1655) {
            if (c->event.mouseButton.y >= 732 &&
                c->event.mouseButton.y <= 900) {
                c->compteur = 6;
                if (c->compteur == 6) {
                return (1);
                }
            }
        }
        second_cond(c);
        last_cond(c);
    }
    return (0);
}
