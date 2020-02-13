/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 21:35:19 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/07 23:35:45 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		memory_size(int argc, char **argv)
{
	char	*temp;
	int		mem;
	int		i;

	i = 0;
	mem = 0;
	while (argc > i)
	{
		temp = argv[i];
		while (*temp && mem++)
			temp++;
		mem++;
		i++;
	}
	return (mem);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*ptr;
	int		i;
	char	*temp;

	ptr = (char*)malloc(memory_size(argc, argv));
	i = 0;
	while (argc > i)
	{
		temp = argv[i];
		while (*temp)
		{
			*ptr = *temp;
			ptr++;
			temp++;
		}
		*ptr = '\n';
		ptr++;
		i++;
	}
	return (ptr);
}
