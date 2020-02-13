/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:03:06 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/12 15:08:47 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a > b)
		return (1);
	else
		return (0);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int k;
	int s;

	s = 0;
	k = 0;
	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			k++;
		i++;
	}
	length--;
	while (length > 0)
	{
		if (f(tab[length], tab[length - 1]) > 0)
			s++;
		length--;
	}
	if (k == 0 || s == 0)
		return (1);
	else
		return (0);
}

int		main()
{
	int tab[] = {5, 4, 3, 0, 0};
	printf("%d", ft_is_sort(tab, 5, &check));
	return (0);
}
