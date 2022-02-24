# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maykman <maykman@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 19:34:14 by maykman           #+#    #+#              #
#    Updated: 2022/02/23 17:41:54 by maykman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION
CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror

# VARIABLES
NAME		:=	bsq
INCLUDES	:=	/includes

# FILES
SRCS		:=	fill_tab.c \
				ft_malloc.c \
				ft_stdout.c \
				get_next_line.c \
				get_next_line_utils.c \
				main.c \
				solve.c \
				utils.c
OBJS		:=	$(addprefix srcs/, ${SRCS:.c=.o})

# RULES
%.o:		%.c
	${CC} ${CFLAGS} -c -I.${INCLUDES} $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	${CC} ${CFLAGS} $^ -o $@

all:		${NAME}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${NAME} ${OBJS}

re:			fclean all

.PHONY:		all clean fclean re
