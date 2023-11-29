# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 08:59:36 by jveras            #+#    #+#              #
#    Updated: 2023/11/29 14:02:12 by jlira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### Variables

NAME = libftprintf.a

SRCS = $(wildcard *.c) $(wildcard libftprintf/*.c)

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf



### Rules

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)


all: $(NAME)


clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)


re: fclean all


.PHONY: all clean fclean re
