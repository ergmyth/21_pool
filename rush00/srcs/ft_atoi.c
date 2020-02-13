/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:41:42 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/05 16:25:47 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int res;
	int sign;

	sign = 1;
	res = 0;
	if (*str == ' ' || *str == '+' || *str == '-' ||
		(*str >= 48 && *str <= 57) || (*str >= 9 && *str <= 13))
	{
		while ((*str >= 9 && *str <= 13) || *str == ' ')
			str++;
		if (*str == '+' || (*str == '-' && (sign *= -1)))
			str++;
		while (*str == '0')
			str++;
		while (*str >= 48 && *str <= 57)
		{
			res = res * 10 + *str - '0';
			str++;
		}
		return (res * sign);
	}
	else
		return (0);
}
