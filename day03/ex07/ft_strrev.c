/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 10:37:21 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/01 10:43:28 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (str[length])
	{
		length++;
	}
	length--;
	while (i < length)
	{
		str[i] = str[i] + str[length];
		str[length] = str[i] - str[length];
		str[i] = str[i] - str[length];
		length--;
		i++;
	}
	return (str);
}
