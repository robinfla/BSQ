NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_print_solution.c ft_find_solution.c ft_verif_map.c ft_read_map.c ft_print.c ft_strlen.c ft_strcpy.c ft_get_chars.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

