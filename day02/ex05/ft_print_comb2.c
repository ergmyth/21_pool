/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 09:06:52 by eleonard          #+#    #+#             */
/*   Updated: 2019/01/31 11:20:26 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print(char var0, char var1, char var2, char var3)
{
	ft_putchar(var0);
	ft_putchar(var1);
	ft_putchar(' ');
	ft_putchar(var2);
	ft_putchar(var3);
	if (!(var0 == 57 && var1 == 56))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char var0;
	char var1;
	char var2;
	char var3;

	var0 = 48;
	var1 = 48;
	var2 = 48;
	var3 = 48;
	while (!(var0 == 57 && var1 == 57))
	{
		if (var0 <= var2 && (var1 < var3 || (var1 == 57 && var3 == 48)))
			ft_print(var0, var1, var2, var3);
		if (var3++ == 57 && (var3 = 48))
			if (var2++ == 57 && (var2 = 48))
				if (var1++ == 57 && (var1 = 48))
					var0++;
	}
}
