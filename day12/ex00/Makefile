# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleonard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/14 11:00:11 by eleonard          #+#    #+#              #
#    Updated: 2019/02/14 19:37:08 by eleonard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(NAME).c
	gcc $(NAME).o -o $(NAME)

clean:
	/bin/rm -f $(NAME).o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
