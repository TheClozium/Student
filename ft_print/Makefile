# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: socloza <socloza@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 20:10:29 by socloza           #+#    #+#              #
#    Updated: 2023/11/23 20:21:28 by socloza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HNAME = ft_printf.h
CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
SRCS = ft_printf.c \
		ft_printf_utils.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

PHONY: clean fclean re all 

