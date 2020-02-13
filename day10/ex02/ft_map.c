/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:06:10 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/11 16:42:07 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *dest;

	dest = (int*)malloc(sizeof(*dest) * length);
	i = 0;
	while (i < length)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (dest);
}
