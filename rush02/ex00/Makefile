# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 12:02:07 by ademurge          #+#    #+#              #
#    Updated: 2022/02/19 12:02:09 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		:= 	basics.c \
				check.c \
				fill.c \
				dict_error.c \
				main.c \
				prefill.c \
				writing.c

OBJS		:= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= rush-02

CFLAGS		= -Wall -Wextra -Werror

%o:			%c
			gcc ${CFLAGS} -I./includes -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			gcc ${CFLAGS} $^ -o $@

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re print
