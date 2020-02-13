/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 10:11:39 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/02 16:58:03 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1 && index < 47)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (-1);
}
