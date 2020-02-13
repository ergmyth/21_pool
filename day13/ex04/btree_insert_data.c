/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 23:06:12 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/15 23:23:30 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)
		(void *, void *))
{
	int		temp;
	t_btree	*ptr;

	ptr = *root;
	if (ptr != NULL && item != NULL)
	{
		temp = cmpf(item, ptr->item);
		if (temp < 0)
			btree_insert_data(&(ptr->left), item, cmpf);
		else
			btree_insert_data(&(ptr->right), item, cmpf);
	}
	else
		*root = btree_create_node(item);
}
