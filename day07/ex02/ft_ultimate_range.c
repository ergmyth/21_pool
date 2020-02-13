/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 20:36:23 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/07 22:37:12 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int count;
	int temp;
	int i;
	int *ptr;

	i = 0;
	temp = min;
	count = 0;
	if (max > min)
	{
		while (min < max && min++)
			count++;
		ptr = (int*)malloc(sizeof(*ptr) * count);
		while (temp < max)
		{
			ptr[i] = temp;
			temp++;
			i++;
		}
		*range = ptr;
		return (i);
	}
	*range = NULL;
	return (0);
}
