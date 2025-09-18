CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./include
NAME = ft_printf.a
SRCS = srcs/ft_putchar_fd.c srcs/ft_putnbr_fd.c srcs/ft_putnbr_uns.c srcs/ft_puthex.c srcs/ft_putadr.c srcs/ft_putstr_fd.c srcs/ft_printf.c
OBJ = $(SRCS:.c=.o)
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
