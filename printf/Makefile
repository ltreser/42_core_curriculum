# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltreser <ltreser@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 19:04:56 by ltreser           #+#    #+#              #
#    Updated: 2023/07/16 22:12:52 by ltreser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c      ft_putchar_len.c      ft_puthexanbr_len.c       ft_putnbr_len.c\
       ft_putstr_len.c  ft_putunsnbr_len.c
OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra
CC = cc

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

re: fclean all

.PHONY: clean all fclean re
