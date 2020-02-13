/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 21:00:50 by eleonard          #+#    #+#             */
/*   Updated: 2019/01/31 22:35:03 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_combn(int n)
{
	char mas[9];
	char i;
	char i1;
	char i2;
	char i3;
	char j;

	i = 0;
	i1 = 0;
	i3 = 0;
	j = 0;
	while (i < n)
	{
		mas[i] = 48;
		i++;
	}
	while (i1 < n){
		if (i1 == (n - 1))
		{
			i2 = i1;
			while (mas[0] <= 57)
			{
				while (i2 >= 1)
				{ 
					if (mas[i2] > mas[i2 - 1])
					{
						if (i2 == 1)
						{
							while (i3 < n)
							{
								ft_putchar(mas[i3]);
								if (i3 == (n - 1))
									ft_putchar(',');
								if (i3 == (n - 1))
									ft_putchar(' ');
								i3++;
							}
						}
					}
					i2--;
				}
				while(i2 < n)
				{
					if (mas[i2 - j]++ == 57 && (mas[i2 - j] = 48))
					if (j == (n - 1))
						mas[i2 - j]++;
					j++;
				}
			}
		}
		i1++;
	}
}
