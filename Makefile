# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 16:19:33 by btan              #+#    #+#              #
#    Updated: 2023/09/19 16:21:39 by btan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =  ft_printf.c \

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJECTS = $(SRCS:.c=.o)

all: $(NAME) 
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	$(CC) tests/main.c -L -l $(NAME) -L libft/-l libft/libft.a
run:
	clear && ./a.out
tester:
	$(CC) tests/test_printf.c -L -l $(NAME) -L libft/-l libft/libft.a -o tester && ./tester

.PHONY: all clean fclean re
