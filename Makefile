# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 18:12:36 by mel-amma          #+#    #+#              #
#    Updated: 2021/11/20 10:10:45 by mel-amma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_print_decimal.c ft_print_hex_upper.c ft_print_hex.c ft_print_memo.c ft_print_unsigned_int.c ft_printf.c ft_putchar.c ft_putstr.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

OBJS = ${SRCS:.c=.o}

RM = rm -f

AR = ar rcs

all : ${NAME}

${NAME} : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "printf is ready"

clean : 
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re