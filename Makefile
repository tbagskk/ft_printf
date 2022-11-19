NAME	= libftprintf.a

SRCS	= ${wildcard *.c}
OBJS	= ${SRCS:.c=.o}
CC		= gcc

RM		= rm -rf
HEADER	= ft_printf.h

${NAME}:	${OBJS}
			${CC}  -c ${SRCS}
			ar rc ${NAME} ${OBJS} ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re