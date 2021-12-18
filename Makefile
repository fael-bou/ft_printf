# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fael-bou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/17 19:40:40 by fael-bou          #+#    #+#              #
#    Updated: 2021/12/18 13:19:41 by fael-bou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OBJ = ft_printf.o ft_conversion.o ft_putchar.o ft_putnbr.o ft_putstr.o

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o : %.c printf.h
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
