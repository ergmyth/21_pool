/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 20:01:54 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/07 20:33:32 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int count;
	int	temp;
	int i;

	i = 0;
	count = 0;
	temp = min;
	if (max > min)
	{
		while (min < max && min++)
			count++;
		arr = (int*)malloc(sizeof(*arr) * count);
		while (temp < max)
		{
			arr[i] = temp;
			i++;
			temp++;
		}
		return (arr);
	}
	else
		return (NULL);
}
