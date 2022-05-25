# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 17:39:40 by johmatos          #+#    #+#              #
#    Updated: 2022/05/24 22:42:23 by johmatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CC				= gcc
CFLAGS			= -Wall -Werror -Wextra
INCLS			= libft.h
DIR 			= ./
SRCS =				ft_atoi.c ft_calloc.c ft_bzero.c ft_isalnum.c \
					ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
					ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
					ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
					ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
					ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c \
					ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
					ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c ft_newlinecpy.c \
					ft_get_next_line.c ft_printf.c ft_itoa_base.c \
					ft_handler_character.c ft_handler_decimal.c \
					ft_handler_percent.c ft_handler_hex_lower.c \
					ft_handler_hex_upper.c ft_handler_pointer.c \
					ft_handler_string.c ft_handler_unsigned.c \
					ft_strjoin_free.c ft_free_split.c
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


.PHONY: all clean fclean
