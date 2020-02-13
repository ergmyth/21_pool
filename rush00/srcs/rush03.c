/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 18:35:04 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/16 15:53:34 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	draw(int width, int height, int line)
{
	char	border_symbol;
	char	middle_symbol;
	int		counter;

	while ((counter = 1) && height >= line && width >= 1)
	{
		border_symbol = 'B';
		middle_symbol = ' ';
		if ((line == 1) && (border_symbol = 'A'))
			middle_symbol = 'B';
		else if ((line == height) && (border_symbol = 'A'))
			middle_symbol = 'B';
		ft_putchar(border_symbol);
		while (counter++ && counter < width)
			ft_putchar(middle_symbol);
		if (width >= 2 && line == 1 && (border_symbol = 'C'))
			ft_putchar(border_symbol);
		else if (width >= 2 && line == height && (border_symbol = 'C'))
			ft_putchar(border_symbol);
		else if (width >= 2)
			ft_putchar(border_symbol);
		ft_putchar('\n');
		line++;
	}
}

void	rush(int width, int height)
{
	int line;

	line = 1;
	draw(width, height, line);
}
