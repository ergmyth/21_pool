/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 12:19:30 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/01 19:31:19 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power >= 0)
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
	else
		return (0);
}
