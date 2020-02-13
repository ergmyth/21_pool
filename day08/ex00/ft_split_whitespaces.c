/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 12:24:15 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/08 15:48:23 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		arr_mem(char *str)
{
	int		j;
	int		i;
	char	*temp;
	char	*hold;

	j = 0;
	temp = str;
	while (*temp && ++j && (hold = temp))
	{
		i = 0;
		while (*hold != 32 && *hold != 10 && *hold != 9 && *hold && hold++)
			i++;
		while ((*hold == 32 || *hold == 10 || *hold == 9) && hold++)
			i++;
		temp = temp + i;
	}
	return (j);
}

int		word_mem(char *str, char **array)
{
	int		j;
	int		i;
	char	*temp;
	char	*hold;
	int		d;

	j = 0;
	temp = str;
	while (*temp && (hold = temp))
	{
		i = 0;
		while (*hold != 32 && *hold != 10 && *hold != 9 && *hold && hold++)
			i++;
		array[j] = (char*)malloc(i);
		d = 0;
		while (i > d && (array[j][d] = *(hold - i + d)))
			d++;
		while ((*hold == 32 || *hold == 10 || *hold == 9) && hold++)
			i++;
		temp = temp + i;
		j++;
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		count;

	count = arr_mem(str);
	array = (char**)malloc(sizeof(char**) * (count + 1));
	word_mem(str, array);
	array[count] = NULL;
	return (array);
}
