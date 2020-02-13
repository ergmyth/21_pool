/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 22:41:31 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/05 23:01:18 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[k])
		k++;
	while (src[i])
	{
		if (k < size - 1)
			dest[k] = src[i];
		k++;
		i++;
	}
	dest[k - 1] = '\0';
	return (k);
}
