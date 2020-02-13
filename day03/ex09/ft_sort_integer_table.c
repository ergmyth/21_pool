/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 22:17:02 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/01 22:32:18 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tab[i + 1] = tab[i] + tab[i + 1];
			tab[i] = tab[i + 1] - tab[i];
			tab[i + 1] = tab[i + 1] - tab[i];
			i = 0;
		}
		else
			i++;
	}
}
