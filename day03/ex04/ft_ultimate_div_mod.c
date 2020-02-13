/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 17:31:42 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/01 23:25:07 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tempa;
	int tempb;

	if (*b != 0)
	{
		tempa = *a;
		*a = *a / *b;
		*b = tempa % *b;
		tempb = *b;
		if (tempa < 0 && tempb > 0)
		{
			*a = *a - 1;
			*b += tempb;
		}
		else if (tempa < 0 && tempb < 0)
		{
			*a = (tempa + tempb) / tempb;
			*b = *a * -tempb + tempa;
		}
	}
}
