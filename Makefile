# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: radaoudi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 18:07:12 by radaoudi          #+#    #+#              #
#    Updated: 2022/01/18 14:59:56 by radaoudi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
SRCS		= ft_printf.c ft_check_base.c ft_print_hexa.c ft_print_char.c ft_print_decimal.c ft_print_pointeur.c ft_print_string.c ft_print_unsi.c ft_putchar_fd.c ft_putnbr.c ft_putstr.c ft_size_int.c ft_strlen.c ft_unsi_putnbr.c
OBJS		= ${SRCS:.c=.o}
HEADER		= includes
FOLDER		= srcs

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

%.o: %.c
			${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:         all clean fclean re
