/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:16:56 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/15 23:15:46 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *elem;

	elem = malloc(sizeof(t_btree));
	if (elem)
	{
		elem->item = item;
		elem->right = NULL;
		elem->left = NULL;
	}
	return (elem);
}
