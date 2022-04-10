##
## EPITECH PROJECT, 2021
## delivery
## File description:
## Makefile
##

SRC	=	sources/lem_in.c	\
		sources/error_handling.c	\
		sources/my_lib.c	\
		sources/my_lib2.c	\
		sources/my_lib3.c	\


OBJ =	$(SRC:.c=.o)

NAME	=	lem_in

FLAGS = -lncurses

all:	$(NAME)

$(NAME):	$(SRC)
			gcc -o $(NAME) $(SRC) -I include/ $(FLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~*

fclean:	clean
	rm -f $(NAME)

re:	fclean all
