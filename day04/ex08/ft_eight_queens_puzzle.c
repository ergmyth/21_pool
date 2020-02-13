/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 19:12:40 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/02 20:24:13 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	place_queen(char *desk)
{
	int i;
	int j;

	i = 9;
	j = 9;
	while (i < 17)
	{
		while (j < 17)
		{
			if (desk[i][j] != 0)
				desk[i][j] = 1;
			change_attacked_pos(desk, i, j);
			j++;
		}
		i++;
	}
}

char	change_attacked_pos(char *desk, int i, int j)
{
	int k;

	k = 0;
	if (desk[i][j] == 1)
		while (k < 8)
		{
			desk[i - k][j] = 0;
			desk[i + k][j] = 0;
			desk[i][j - k] = 0;
			desk[i][j + k] = 0;
			desk[i - k][j + k] = 0;
			desk[i + k][j + k] = 0;
			desk[i - k][j - k] = 0;
			desk[i + k][j - k] = 0;
			k++;
		}
}

int		ft_eight_queens_puzzle(void)
{
	int i;
	int j;
	char	desk[24][24];
	int counter;

	counter = 0;
	while (counter != 8)
	{
		place_queen(desk);
		counter++;
	}
}
