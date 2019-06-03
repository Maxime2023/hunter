/*
** EPITECH PROJECT, 2018
** text
** File description:
** text
*/

#include "../include/header.h"

void    text_and_sprite(struct a *c)
{
    c->texture = sfTexture_createFromFile("./img/mario.jpg", NULL);
    c->texture1 = sfTexture_createFromFile("./img/wesh.jpg", NULL);
    c->texture2 = sfTexture_createFromFile("./img/cible.png", NULL);
    c->texture3 = sfTexture_createFromFile("./img/rectangle.png", NULL);
    c->texture4 = sfTexture_createFromFile("./img/life.png", NULL);
    c->texture5 = sfTexture_createFromFile("./img/gm.jpg", NULL);
    c->texture6 = sfTexture_createFromFile("./img/exit.png", NULL);
    c->texture7 = sfTexture_createFromFile("./img/reset.png", NULL);
    c->sprite = sfSprite_create();
    c->sprite1 = sfSprite_create();
    c->sprite2 = sfSprite_create();
    c->sprite3 = sfSprite_create();
    c->sprite4 = sfSprite_create();
    c->sprite5 = sfSprite_create();
    c->sprite6 = sfSprite_create();
    c->sprite7 = sfSprite_create();
}
