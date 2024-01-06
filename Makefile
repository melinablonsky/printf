# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 12:25:57 by mblonsky          #+#    #+#              #
#    Updated: 2024/01/06 14:50:34 by mblonsky         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB = ft_printf.h
RM = rm -f
CC = gcc
AR = ar -rcs
CFLAGS = -Wall -Wextra -Werror
SRC =  ft_printf.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_unsint.c\

.PHONY: all clean fclean re bonus

OBJS = $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
