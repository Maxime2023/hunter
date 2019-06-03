/*
** EPITECH PROJECT, 2018
** main
** File description:
** Task01
*/

#include "../include/header.h"

void    calling_fonction(struct a *c)
{
    c->win = 0;
    c->compteur = 0;
    c->pos.x = 1;
    c->pos.y = 1;
    c->vitesse.x = 0;
    c->vitesse.y = 0;
    c->bird.x = 0;
    c->bird.y = 0;
    c->best_score = 0;
    window_and_rect(c);
    text_and_sprite(c);
    set_text(c);
    scale_and_pos(c);
    main_music(c);
}

void    moving_game(struct a *c)
{
    p_text(c);
    sfRenderWindow_drawText(c->window, c->score, NULL);
    target_and_drawing(c);
    while (sfRenderWindow_pollEvent(c->window, &c->event)) {
        if (c->event.type == sfEvtClosed)
            sfRenderWindow_close(c->window);
        if (c->event.type == sfEvtMouseButtonPressed)
            if (c->event.mouseButton.x >= c->bird.x &&
                c->event.mouseButton.x <= c->bird.x + 110) {
                if (c->event.mouseButton.y >= c->bird.y &&
                    c->event.mouseButton.y <= c->bird.y + 110) {
                    c->vitesse.x += 0.4;
                    c->bird.x = 0;
                    c->bird.y = rand_nb();
                    c->win++;
                }
            } else
                c->compteur++;
    }
}

int    hunter(struct a *c)
{
    c = malloc(sizeof(struct a));
    calling_fonction(c);
    while (sfRenderWindow_isOpen(c->window)) {
        moving_game(c);
        if (c->win >= c->best_score)
            c->best_score = c->win;
        calc_time(c);
        c_equa_five(c);
        if (c_equa_six(c) == 1) {
            sfMusic_destroy(c->music);
            sfRenderWindow_close(c->window);
            sfRenderWindow_destroy(c->window);
            return (0);
        }
    }
    sfMusic_destroy(c->music);
    sfRenderWindow_destroy(c->window);
    free(c);
    return (0);
}

int    main(int ac, char **argv)
{
    struct a *c = malloc(sizeof(struct a *));
    if (ac == 1)
        hunter(c);
    else if (argv[1][0] == '-' && argv[1][1] == 'h') {
        my_putstr("Duck Hunt is a shooter game in which"
"the objective is to shoot moving targets.\n");
        return (0);
        }
    free(c);
    return (0);
}
