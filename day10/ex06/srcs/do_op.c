/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 18:32:09 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/12 11:58:43 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_calculate(char c, char *error, int a, int b)
{
	int res;

	res = 0;
	if (c == '+')
		res = a + b;
	else if (c == '-')
		res = a - b;
	else if (c == '*')
		res = a * b;
	else if (c == '/' && b != 0)
		res = a / b;
	else if (c == '/' && b == 0)
		*error = '1';
	else if (c == '%' && b != 0)
		res = a % b;
	else if (c == '%' && b == 0)
		*error = '2';
	return (res);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	int		res;
	char	error[24];

	error[0] = 'k';
	if (argc == 4)
	{
		res = 0;
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if (argv[2][1] == '\0')
			res = ft_calculate(argv[2][0], error, a, b);
		if (error[0] == 'k')
			ft_putnbr(res);
		else if (error[0] == '1')
			ft_putstr("Stop : division by zero\n");
		else
			ft_putstr("Stop : modulo by zero\n");
	}
	return (0);
}
