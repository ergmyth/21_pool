# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleonard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/14 11:27:50 by eleonard          #+#    #+#              #
#    Updated: 2019/02/14 21:27:32 by eleonard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

FLAGS = -Wall -Wextra -Werror -c -I

HEADER = includes/

SRCS = srcs/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(SRCS)$(NAME).c
	gcc $(NAME).o -o $(NAME)

clean:
	/bin/rm -f $(NAME).o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
