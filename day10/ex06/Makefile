# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleonard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 18:30:28 by eleonard          #+#    #+#              #
#    Updated: 2019/02/12 12:57:12 by eleonard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = srcs/

HEADER = includes/

FLAGS = -Wall -Wextra -Werror -I

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(SRCS)do_op.c $(SRCS)ft_atoi.c $(SRCS)ft_putnbr.c $(SRCS)ft_putstr.c $(SRCS)ft_putchar.c -o $(NAME)

clean:
	/bin/rm -f ./$(NAME)
