# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleonard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 12:40:24 by eleonard          #+#    #+#              #
#    Updated: 2019/02/12 12:41:30 by eleonard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/

NAME = libft.a

HEADER = includes/

FLAGS = -Wall -Wextra -Werror -c -I

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(SRCS)ft_putchar.c $(SRCS)ft_swap.c $(SRCS)ft_putstr.c $(SRCS)ft_strlen.c $(SRCS)ft_strcmp.c
	ar rc $(NAME) ./ft_putchar.o ./ft_swap.o ./ft_putstr.o ./ft_strlen.o ./ft_strcmp.o
	ranlib $(NAME)

clean:
	/bin/rm -f ./ft_putchar.o ./ft_swap.o ./ft_putstr.o ./ft_strlen.o ./ft_strcmp.o

fclean:
	/bin/rm -f ./$(NAME) 

re: fclean all
