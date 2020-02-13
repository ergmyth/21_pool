/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:41:10 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/14 20:39:52 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*add_link(t_list *list, void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(*tmp));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = list;
	}
	return (tmp);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	if (ac == 1)
		return (NULL);
	list = ft_create_elem(av[1]);
	i = 2;
	while (ac > i)
	{
		list = add_link(list, av[i]);
		i++;
	}
	return (list);
}
