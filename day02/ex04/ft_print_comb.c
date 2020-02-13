/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:36:35 by eleonard          #+#    #+#             */
/*   Updated: 2019/01/31 14:58:21 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char first_var;
	char second_var;
	char third_var;

	first_var = 48;
	second_var = 48;
	third_var = 48;
	while (first_var <= 57)
	{
		if (first_var < second_var && second_var < third_var)
		{
			ft_putchar(first_var);
			ft_putchar(second_var);
			ft_putchar(third_var);
			if (first_var != 55)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (third_var++ == 57 && (third_var = 48))
			if (second_var++ == 57 && (second_var = 48))
				first_var++;
	}
}
