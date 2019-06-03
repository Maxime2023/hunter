##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

CC	=	gcc

CFLAGS	=	-l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio \
		-I./include

SRC	=	src/hunter.c				\
		src/my_putstr.c				\
		src/my_putchar.c			\
		src/life_and_green.c			\
		src/move_rect.c				\
		src/text_and_sprite.c			\
		src/set_text.c				\
		src/calc_time.c				\
		src/rand_nb.c				\
		src/c_equa_five.c			\
		src/c_equa_six.c			\
		src/scale_and_pos.c			\
		src/window_and_rect.c			\
		src/target_and_drawing.c		\
		src/sounds.c				\
		src/count_nb.c				\
		src/my_revstr.c				\
		src/my_get_str.c			\
		src/p_text.c				\
		src/level.c				\
		src/my_get_level.c			\
		src/set_levels.c

OBJ	= 	$(SRC:.c=.o)

RM 	=	rm -f

NAME	=	my_hunter

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
