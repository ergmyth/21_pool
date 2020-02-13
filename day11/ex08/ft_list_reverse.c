/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:28:47 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/13 20:51:49 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *a;
	t_list *b;

	list = *begin_list;
	if (list == NULL || list->next == NULL)
		return ;
	a = list->next;
	b = a->next;
	list->next = 0;
	a->next = list;
	while (b)
	{
		list = a;
		a = b;
		b = a->next;
		a->next = list;
	}
	*begin_list = a;
}
