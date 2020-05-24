##
## EPITECH PROJECT, 2019
## Project
## File description:
## Makefile
##

SRCS	=	main.c		\
			error/error.c			\
			srcs/put_to_mx.c			\
			srcs/disp.c			\
			srcs/encrypt.c			\
			lib/my/my_putchar.c		\
			lib/my/my_getnbr.c		\
			lib/my/my_strlen.c		\
			lib/my/my_putstr.c

OBJ	=	$(SRCS:.c=.o)

NAME	=	103cipher

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)	-lm -lncurses

clean:
	rm -f $(OBJ)
	rm -f vgcore.*

fclean:	clean
	rm -f $(NAME)

re:	fclean all
