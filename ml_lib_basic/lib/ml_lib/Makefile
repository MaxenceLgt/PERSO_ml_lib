##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/char_managing/ml_char_is.c				\
		src/char_managing/ml_putchar.c				\
		\
		src/str_managing/ml_putstr.c				\
		src/str_managing/ml_strlen.c				\
		src/str_managing/ml_strupcase.c				\
		src/str_managing/ml_strlowcase.c			\
		src/str_managing/ml_revstr.c				\
		src/str_managing/ml_strcmp.c				\
		src/str_managing/ml_strncmp.c				\
		src/str_managing/ml_put_nbr.c				\
		src/str_managing/ml_char_is_in_lst.c		\
		\
		src/array_managing/ml_count_array_size.c	\
		src/array_managing/ml_display_array.c		\
		\
		src/int_managing/ml_sort_int_array.c		\
		src/int_managing/ml_nbrlen.c				\
		src/int_managing/ml_atoi.c					\
		src/int_managing/ml_atof.c

INCLUDE = include/

NAME	=	libml_lib.a

CFLAGS = $(INCLUDE:%=-I%) -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc -o ../$(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../$(NAME)

re: fclean all

.SILENT:
