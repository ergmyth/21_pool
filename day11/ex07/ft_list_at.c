/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:27:37 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/14 20:45:28 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *list;

	if (begin_list && nbr != 0)
	{
		list = begin_list;
		while (nbr > 1 && list)
		{
			list = list->next;
			nbr--;
		}
		return (list);
	}
	else
		return (NULL);
}
