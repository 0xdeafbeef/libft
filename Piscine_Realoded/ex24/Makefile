# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhetting <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 21:29:13 by qhetting          #+#    #+#              #
#    Updated: 2018/11/21 22:32:17 by qhetting         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
SRC_H=/includes
SOURCES=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
NAME = libft.a
all:
	@gcc -I  $(SRC_H) -c $(SOURCES)
	@ar rc $(NAME) $(OBJECTS)
clean:
	@/bin/rm -f $(OBJECTS)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all