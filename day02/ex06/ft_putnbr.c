/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 19:14:07 by eleonard          #+#    #+#             */
/*   Updated: 2019/01/31 20:50:36 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int counter;
	int temp;
	int div;
	int temp_nb;

	counter = 1;
	if (nb < 0 && (ft_putchar('-')))
		nb = -1 * nb;
	temp_nb = nb;
	while ((temp_nb /= 10) > 10)
		counter++;
	while (counter >= 0)
	{
		div = 1;
		temp = counter;
		while (temp > 0)
		{
			div *= 10;
			temp--;
		}
		ft_putchar(nb / div + 48);
		nb %= div;
		counter--;
	}
}
