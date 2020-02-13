/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 20:44:00 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/05 20:58:20 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p_to_find;
	char	*start;
	int		i;

	i = 0;
	start = str;
	while (*str != '\0')
	{
		p_to_find = to_find;
		while (*str == *p_to_find)
		{
			str++;
			p_to_find++;
			if (*p_to_find == '\0')
				return (start + i);
		}
		i++;
		str++;
	}
	return (0);
}
