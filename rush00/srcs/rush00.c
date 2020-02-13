/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:55:41 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/16 15:53:24 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	rush(int width, int height)
{
	char	border_symbol;
	char	middle_symbol;
	int		line;
	int		counter;

	line = 1;
	while (height >= line && width >= 1)
	{
		counter = 1;
		border_symbol = '|';
		middle_symbol = ' ';
		if ((line == 1 || line == height) && (border_symbol = 'o'))
			middle_symbol = '-';
		ft_putchar(border_symbol);
		while (counter++ && counter < width)
			ft_putchar(middle_symbol);
		if (width >= 2)
			ft_putchar(border_symbol);
		ft_putchar('\n');
		line++;
	}
}
