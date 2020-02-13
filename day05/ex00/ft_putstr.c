/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 11:16:12 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/04 11:16:15 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int amount_of_chars;

	amount_of_chars = 0;
	while (str[amount_of_chars])
	{
		ft_putchar(str[amount_of_chars]);
		amount_of_chars++;
	}
}
