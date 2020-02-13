/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:18:19 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/01 11:43:48 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int factorial_result;

	i = 0;
	factorial_result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		i = 1;
		while (i <= nb)
		{
			factorial_result *= i;
			i++;
		}
	}
	return (factorial_result);
}
