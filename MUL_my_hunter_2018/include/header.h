/*
** EPITECH PROJECT, 2018
** header
** File description:
** header
*/

#include <unistd.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <time.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <stdio.h>
#include <SFML/Audio.h>

#ifndef HEADER_H_
#define HEADER_H_

typedef struct a
{
    sfTexture* texture;
    sfTexture* texture1;
    sfTexture* texture2;
    sfTexture* texture3;
    sfTexture* texture4;
    sfTexture* texture5;
    sfTexture* texture6;
    sfTexture* texture7;
    sfTexture* texture8;
    sfSprite* sprite;
    sfSprite* sprite1;
    sfSprite* sprite2;
    sfSprite* sprite3;
    sfSprite* sprite4;
    sfSprite* sprite5;
    sfSprite* sprite6;
    sfSprite* sprite7;
    sfSprite* sprite8;
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfFont* font;
    sfText* text;
    sfEvent event;
    sfTime time;
    float seconds;
    sfClock *clock;
    sfIntRect rect;
    int compteur;
    sfVector2f vitesse;
    sfVector2f bird;
    sfVector2f pos;
    sfVector2f target;
    sfVector2f life;
    sfVector2f restart;
    sfVector2f reset;
    sfVector2f s_reset;
    sfVector2f green;
    sfVector2f life1;
    sfVector2f life2;
    sfVector2f reposition;
    sfVector2f gm;
    sfVector2f tej_green;
    sfMusic *music;
    sfMusic *duck;
    sfMusic *gun;
    sfText* score;
    sfText* score_nb;
    int win;
    int best_score;

}b;

int    my_putstr(char const *str);
void   my_putchar(char);
void   life_and_green(struct a *c);
void    move_rect(sfIntRect *rect, int offset, int max_value);
void    text_and_sprite(struct a *c);
void    set_text(struct a *c);
void    calc_time(struct a *c);
int     rand_nb(void);
int    c_equa_five(struct a *c);
int    c_equa_six(struct a *c);
void   scale_and_pos(struct a *c);
void   window_and_rect(struct a *c);
void   target_and_drawing(struct a *c);
void    main_music(struct a *c);
void   two(struct a *c);
void   one(struct a *c);
void   tree(struct a *c);
void   four(struct a *c);
int    count_nb(char *str);
char    *my_revstr(char *str);
char    *my_get_str(struct a * c);
void    p_text(struct a *c);
void    level(struct a *c);
char    *my_get_level(struct a *c);
char    *level_five(struct a *c, char *str);
char    *level_six(struct a *c, char *str);
char    *level_seven(struct a *c, char *str);
char    *level_eight(struct a *c, char *str);
char    *level_nine(struct a *c, char *str);
#endif
