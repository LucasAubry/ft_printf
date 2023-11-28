NAME = libftprintf.a

SRC = 	ft_p.c \
	ft_puthexa.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putunbr.c \
	ft_printf.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)