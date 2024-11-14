# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjose-ma <rjose-ma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 18:42:51 by rafael            #+#    #+#              #
#    Updated: 2024/11/14 16:31:37 by rjose-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

NAME = libftprintf.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS =		ft_printf.c ft_dec_to_hex_pointer.c \
			ft_putnbr_u.c ft_putnbr_hex.c ft_putchar.c  \
			ft_putnbr.c ft_putstr.c

OFILES = ${SRCS:.c=.o}

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OFILES}
	ar rcs ${NAME} ${OFILES}

clean:
	rm -rf ${OFILES}

fclean: clean
	rm -rf ${NAME} 

re: fclean all

.PHONY: all clean fclean re

#endif