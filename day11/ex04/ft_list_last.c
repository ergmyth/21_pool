/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:22:55 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/13 16:58:13 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *list;

	if (begin_list)
	{
		list = *begin_list;
		while (list->next)
			list = list->next;
		return (list);
	}
	else
		return (NULL);
}
