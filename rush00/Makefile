# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleonard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/16 15:53:55 by eleonard          #+#    #+#              #
#    Updated: 2019/02/16 16:21:41 by eleonard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRCS = srcs/

HEADER = includes/

FLAGS = -Wall -Wextra -Werror -I

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(SRCS)main.c $(SRCS)rush00.c $(SRCS)ft_atoi.c $(SRCS)ft_putchar.c -o colle-00
	gcc $(FLAGS) $(HEADER) $(SRCS)main.c $(SRCS)rush01.c $(SRCS)ft_atoi.c $(SRCS)ft_putchar.c -o colle-01
	gcc $(FLAGS) $(HEADER) $(SRCS)main.c $(SRCS)rush02.c $(SRCS)ft_atoi.c $(SRCS)ft_putchar.c -o colle-02
	gcc $(FLAGS) $(HEADER) $(SRCS)main.c $(SRCS)rush03.c $(SRCS)ft_atoi.c $(SRCS)ft_putchar.c -o colle-03
	gcc $(FLAGS) $(HEADER) $(SRCS)main.c $(SRCS)rush04.c $(SRCS)ft_atoi.c $(SRCS)ft_putchar.c -o colle-04

clean:
	/bin/rm -f 

fclean:
	/bin/rm -f ./colle-00 ./colle-01 ./colle-02 ./colle-03 ./colle-04

re: fclean all
