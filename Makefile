CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c ft_hexa.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunsignednbr.c ft_strlen.c
OBJ = $(SRC:.c=.o)

NAME = ft_printf.a

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all fclean re clean