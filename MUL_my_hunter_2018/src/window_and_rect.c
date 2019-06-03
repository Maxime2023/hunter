/*
** EPITECH PROJECT, 2018
** window
** File description:
** window
*/

#include "../include/header.h"

void    window_and_rect(struct a *c)
{
    c->rect.top = 0;
    c->rect.left = 0;
    c->rect.width = 110;
    c->rect.height = 110;
    c->video_mode.width = 1920;
    c->video_mode.height = 1080;
    c->video_mode.bitsPerPixel = 32;
    c->clock = sfClock_create();
    c->window = sfRenderWindow_create(c->video_mode, "MyWindow",
                                      sfDefaultStyle, NULL);
}
