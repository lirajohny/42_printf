# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlira <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 13:07:28 by jlira             #+#    #+#              #
#    Updated: 2023/11/21 13:07:39 by jlira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

NAME	= libftprintf.a

SRCS	= ft_printf.c libft/ft_strchr.c srcs/check_argument.c srcs/ft_putchar.c \
			srcs/ft_puthexa.c srcs/ft_putnbr.c srcs/ft_putstr.c \
			srcs/ft_putunsnbr.c \

OBJS	= $(SRCS:.c=.o)

.c.o:
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
