# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleonard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/17 21:25:19 by eleonard          #+#    #+#              #
#    Updated: 2019/02/17 22:13:46 by eleonard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRCS = srcs/

HEADER = includes/

FLAGS = -Wall -Wextra -Werror -c -I

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(SRCS)main.c $(SRCS)eval_expr.c $(SRCS)do_op.c $(SRCS)ft_putnbr.c $(SRCS)ft_putchar.c $(SRCS)ft_strlen.c
	gcc main.o eval_expr.o do_op.o ft_putnbr.o ft_putchar.o ft_strlen.o -o $(NAME)
	
clean:
	/bin/rm -f main.o eval_expr.o do_op.o ft_putnbr.o ft_putchar.o ft_strlen.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
