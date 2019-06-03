/*
** EPITECH PROJECT, 2018
** sounds
** File description:
** sounds
*/

#include "../include/header.h"

void    main_music(struct a *c)
{
    c->music = sfMusic_createFromFile("./img/kl.ogg");
    sfMusic_play(c->music);
}
