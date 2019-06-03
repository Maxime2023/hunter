/*
** EPITECH PROJECT, 2018
** test
** File description:
** text
*/

#include "../include/header.h"

void    set_text(struct a *c)
{
    sfSprite_setTexture(c->sprite, c->texture, sfTrue);
    sfSprite_setTexture(c->sprite1, c->texture1, sfTrue);
    sfSprite_setTexture(c->sprite2, c->texture2, sfTrue);
    sfSprite_setTexture(c->sprite3, c->texture3, sfTrue);
    sfSprite_setTexture(c->sprite4, c->texture4, sfTrue);
    sfSprite_setTexture(c->sprite5, c->texture5, sfTrue);
    sfSprite_setTexture(c->sprite6, c->texture6, sfTrue);
    sfSprite_setTexture(c->sprite7, c->texture7, sfTrue);
}
