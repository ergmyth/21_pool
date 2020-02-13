/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 22:19:53 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/07 19:27:16 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		k;
	char	*str;

	k = 0;
	i = 0;
	while (src[k])
		k++;
	str = (char*)malloc(k);
	while (i < k)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
