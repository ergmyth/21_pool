/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 11:27:53 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/02 18:07:33 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int limit;
	int i;

	i = 3;
	limit = nb / 3;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	while (i <= limit)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
