/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 18:19:28 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/02 18:24:46 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int				sqrt;
	unsigned int	square;

	sqrt = 0;
	if (nb >= 0)
	{
		while (square <= nb)
		{
			square = sqrt * sqrt;
			if (nb == square)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
