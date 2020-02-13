/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 18:05:02 by eleonard          #+#    #+#             */
/*   Updated: 2019/01/31 18:13:08 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int counter_of_chars;

	counter_of_chars = 0;
	while (str[counter_of_chars])
	{
		counter_of_chars++;
	}
	return (counter_of_chars);
}
