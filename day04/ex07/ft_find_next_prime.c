/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 11:55:28 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/02 17:05:49 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int limit;
	int i;

	i = 3;
	limit = nb / 3;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	while (i <= limit)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i += 2;
	}
	return (nb);
}
