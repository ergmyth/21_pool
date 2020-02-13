/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:06:10 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/11 16:36:22 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		ft_plus(int a)
{
	a++;
	return (a);	
}

int		*ft_map(int *tab, int length, int(*f)(int))
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

int		main()
{
	int s1[] = {11, 12, 13};
	int i = 0;
	while (i < 3)
	{
		printf("%d", s1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	int *s2;
	s2 = ft_map(s1, 3, &ft_plus);
	while (i < 3)
	{
		printf("%d", s2[i]);
		i++;
	}
	return (0);
}
