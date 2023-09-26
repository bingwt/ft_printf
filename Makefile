# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 16:19:33 by btan              #+#    #+#              #
#    Updated: 2023/09/26 09:33:33 by btan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =  srcs/ft_printchar.c \
	srcs/ft_printstr.c \
	srcs/ft_printnbr.c \
	srcs/ft_printunbr.c \
	srcs/ft_printhex.c \
	srcs/ft_printaddress.c \
	srcs/ft_printformat.c \
	srcs/ft_printf.c \

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

OBJECTS = $(SRCS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar -rc $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	$(CC) tests/main.c -L -l $(NAME)
run:
	clear && ./a.out
tester:
	$(CC) tests/test_printf.c -L -l $(NAME) -o tester && ./tester && rm tester

.PHONY: all clean fclean re
