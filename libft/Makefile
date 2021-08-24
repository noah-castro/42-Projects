# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmarques <nmarques@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 19:58:07 by nmarques          #+#    #+#              #
#    Updated: 2021/08/24 19:58:07 by nmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \

OBJS	=	${SRCS:.c=.o}

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}
