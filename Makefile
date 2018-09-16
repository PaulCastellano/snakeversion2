NAME = snake

PATH_SRC = ./

PATH_OBJ = ./

CC = gcc

HEAD = include/snake.h

SRC =	src/main.c \
		src/memmalloctext.c \
		src/read.c

OBJ = $(patsubst %.c,%.o,$(addprefix $(PATH_SRC), $(SRC)))

all : $(NAME)

$(NAME): $(OBJ) $(HEAD)
		$(CC) -o $(NAME) $(OBJ) -lm -L/usr/lib/X11 -lmlx -lXext -lX11

.PHONY: clean fclean

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all