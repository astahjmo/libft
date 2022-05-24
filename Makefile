# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 17:39:40 by johmatos          #+#    #+#              #
#    Updated: 2022/05/24 20:02:35 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CC				= gcc
CFLAGS			= -Wall -Werror -Wextra
INCLS			= libft.h
DIR 			= ./
SRC				= $(shell find $(DIR) -name 'ft_*.c')
OBJS			= $(SRC:$.c=o)
MAIN			= main.c

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rsc $(NAME) $(OBJS)
$(OBJS):	$(SRC) $(HEADER)
	$(CC) $(CFLAGS) -c $(SRC)

clean: $(OBJS)
	rm -rf $(OBJS)

fclean: 
	rm -rf $(NAME) $(OBJS)

re: fclean all


.PHONY: all clean
