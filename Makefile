NAME = libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -f


SRCS = ft_printf.c \
		ft_printf_fonction.c

AR = ar rcs

OBJS =	${SRCS:.c=.o}

BONUSOBJS	= ${BONUS:.c=.o}

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): ${OBJS}
		$(AR) $(NAME) ${OBJS}

all:	${NAME}

clean:
		rm -f ${OBJS} ${BONUSOBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

bonus : ${OBJS} ${BONUSOBJS}
		ar rc ${NAME} ${OBJS} ${BONUSOBJS}

.PHONY: all clean fclean re
