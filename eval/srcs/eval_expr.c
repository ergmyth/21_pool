/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 12:47:54 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/17 23:22:28 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		take_nbr(char **str)
{
	int		nbr;
	int		sign;

	sign = 1;
	nbr = 0;
	if (*str[0] == 43 || *str[0] == 45)
	{
		if ((*str)[0] == 45)
			sign *= -1;
		*str = *str + 1;
	}
	if (*str[0] == 40)
	{
		*str = *str + 1;
		nbr = dif_operation(str);
		if (*str[0] == 41)
			*str = *str + 1;
	}
	while (*str[0] >= 48 && *str[0] <= 57)
	{
		nbr = nbr * 10 + *str[0] - 48;
		*str = *str + 1;
	}
	return (nbr * sign);
}

int		high_operation(char **str)
{
	int		n1;
	int		n2;
	char	operator;

	n1 = take_nbr(str);
	if (*str[0] == 42 || *str[0] == 47 || *str[0] == 37)
	{
		operator = *str[0];
		*str = *str + 1;
		n2 = take_nbr(str);
		n1 = do_op(operator, n1, n2);
	}
	return (n1);
}

int		dif_operation(char **str)
{
	int		n1;
	int		n2;
	char	operator;

	n1 = take_nbr(str);
	while (*str[0] != '\0' && *str[0] != 41)
	{
		operator = *str[0];
		*str = *str + 1;
		if (operator == 43 || operator == 45)
			n2 = high_operation(str);
		else
			n2 = take_nbr(str);
		n1 = do_op(operator, n1, n2);
	}
	return (n1);
}

char	*remove_32(char *str)
{
	int		i;
	int		j;
	char	*str_second;

	str_second = malloc(ft_strlen(str) + 1);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 32)
		{
			str_second[j] = str[i];
			j++;
		}
		i++;
	}
	str_second[j] = '\0';
	return (str_second);
}

int		eval_expr(char *str)
{
	str = remove_32(str);
	if (str[0] == '\0')
		return (0);
	return (dif_operation(&str));
}
