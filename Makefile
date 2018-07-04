##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## made by Loris D
##

CC	=	gcc

SRC	=	src/framebuffer.c	\
		src/win.c		\
		src/fonct.c		\
		src/nor.c		\
		src/rec.c		\
		src/rec2.c		\
		src/rec3.c		\
		src/rec4.c		\
		src/line2.c		\
		src/line.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_screensaver

CFLAGS	=	-Wall -Wextra -g

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) -l c_graph_prog

debug:
	gcc -o $(NAME) $(SRC) $(CFLAGS) -l c_graph_prog -g

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all
