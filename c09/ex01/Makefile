# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 12:11:15 by ademurge          #+#    #+#              #
#    Updated: 2022/02/19 14:02:51 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS	= $(addprefix srcs/, ${SRCS:.c=.o})

CFLAGS	= -Wall -Wextra -Werror

GCC	= gcc 

RM	= rm -f

NAME	= libft.a


.c.o:
		${GCC} ${CFLAGS} -c -I ./includes $< -o ${<:.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
		ar -rcs $@ $^

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
