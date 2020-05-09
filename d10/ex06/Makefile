# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tri <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 19:26:02 by tri               #+#    #+#              #
#    Updated: 2020/01/21 23:02:15 by tri              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = ./srcs/do_op.c srcs/ft_atoi.c srcs/ft_add.c srcs/ft_div.c srcs/ft_mod.c srcs/ft_mul.c srcs/ft_sub.c srcs/ft_putchar.c srcs/ft_putnbr.c

OBJ = do_op.o ft_atoi.o ft_add.o ft_div.o ft_mod.o ft_mul.o ft_sub.o ft_putchar.o ft_putnbr.o

HEAD = ./includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(HEAD) -c $(SRCS) 
	gcc  - o $(NAME)

clean: 
	/bin/rm -f $(NAME)

re: clean all
