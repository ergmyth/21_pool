/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 20:54:28 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/17 21:43:14 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		do_op(char operator, int n1, int n2)
{
	if (operator == '+')
		return (n1 + n2);
	else if (operator == '-')
		return (n1 - n2);
	else if (operator == '*')
		return (n1 * n2);
	else if (operator == '/')
		return (n1 / n2);
	else
		return (n1 % n2);
}
