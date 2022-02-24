# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 10:18:14 by ademurge          #+#    #+#              #
#    Updated: 2022/02/21 16:34:51 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		:= 	do_op.c calcul.c basics.c

OBJS		:= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= do-op

CFLAGS		= -Wall -Wextra -Werror

%o:			%c
			@gcc ${CFLAGS} -I./includes -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			@gcc ${CFLAGS} $^ -o $@
			@echo "...Everything compiled!"

all:		${NAME}

clean:
			@rm -f ${OBJS}

fclean:		clean
			@rm -f ${NAME}
			@echo "...Everything removed!"

re:			fclean all
			@echo "...Completed!"

.PHONY:		all clean fclean re print
