# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/21 14:49:16 by johmatos          #+#    #+#              #
#    Updated: 2022/04/26 01:40:19 by johmatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#						Source
# ---------------------------------------------------------->
CC				= gcc
CFLAGS			= -Wall -Werror -Wextra
INCLS			= ./src
DIR 			= ./
SRC				:= $(shell find $(DIR) -name 'ft_*.c')
OBJS			:= $(addprefix $(DIR)/,$(SRC):%.c=%.o)
MAIN			= main.c


install: 	$(SRC)
		$(CC) $(CFLAGS) -I $(INCLS) $(MAIN) $(SRC)