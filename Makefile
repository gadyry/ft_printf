SRC = ft_print_based_in_format.c ft_printf.c ft_print_digit.c ft_print_ptr.c \
      ft_putstr.c ft_putchar.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

RM = rm -rf

all: $(NAME)

%.o: %.c  ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


