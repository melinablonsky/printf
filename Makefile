# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 12:25:57 by mblonsky          #+#    #+#              #
#    Updated: 2024/02/03 19:56:29 by mblonsky         ###   ########.fr        #
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
	ft_putptr.c\
	ft_puthexa.c\

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
