/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 11:52:04 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/10 12:03:17 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	checkblock_dot(int i, int j, char *tab, char **argv)
{
	int temp;
	int limit_i;
	int limit_j;

	if (1 <= i && i <= 3)
		i = 1;
	if (4 <= i && i <= 6)
		i = 4;
	if (7 <= i && i <= 9)
		i = 7;
	if (0 <= j && j <= 2)
		j = 0;
	if (3 <= j && j <= 5)
		j = 3;
	if (6 <= j && j <= 8)
		j = 6;
	temp = j;
	limit_i = i + 3;
	limit_j = j + 3;
	while (i < limit_i)
	{
		j = temp;
		while (j < limit_j)
		{
			if (argv[i][j] != 46)
				tab[(int)argv[i][j] - 49] = '.';
			j++;
		}
		i++;
	}
}

int		put_digit(int dot_i, int dot_j, char **argv, int digits)
{
	int i;
	int j;
	char tab12[10] = "123456789\0";
	char k;

	i = 1;
	j = 0;
	while (j < 9 && argv[dot_i][j])
	{
		if (argv[dot_i][j] != 46)
			tab12[(int)argv[dot_i][j] - 49] = '.';
		j++;
	}
	while (i < 10 && argv[i][dot_j])
	{
		if (argv[i][dot_j] != 46)
			tab12[(int)argv[i][dot_j] - 49] = '.';
		i++;
	}
	checkblock_dot(dot_i, dot_j, tab12, argv);
	//printf("%s\n", tab12);
	i = 0;
	j = 0;
	while (i < 9)
	{
		if (tab12[i] != 46)
		{
			k = tab12[i];
			j++;
		}
		i++;
	}
	if (j == 1)
	{
		argv[dot_i][dot_j] = k;
		digits++;
	}
	return (digits);
}

int		checkblock(int i, int j, char cur, char **argv)
{
	int nmb;
	int temp;
	int limit_i;
	int limit_j;

	nmb = 0;
	if (1 <= i && i <= 3)
		i = 1;
	if (4 <= i && i <= 6)
		i = 4;
	if (7 <= i && i <= 9)
		i = 7;
	if (0 <= j && j <= 2)
		j = 0;
	if (3 <= j && j <= 5)
		j = 3;
	if (6 <= j && j <= 8)
		j = 6;
	temp = j;
	limit_i = i + 3;
	limit_j = j + 3;
	while (i < limit_i)
	{
		j = temp;
		while (j < limit_j)
		{
			if (argv[i][j] == cur)
				nmb++;
			j++;
		}
		i++;
	}
	return (nmb);
}

int		check(int pos_i, int pos_j, char **argv)
{
	int i;
	int j;
	char curr_digit;
	int counter;

	counter = 0;
	curr_digit = argv[pos_i][pos_j];
	i = 1;
	j = 0;
	while (argv[pos_i][j] && j < 9)
	{
		if (argv[pos_i][j] == curr_digit)
			counter++;
		j++;
	}
	while (i < 10 && argv[i][pos_j])
	{
		if (argv[i][pos_j] == curr_digit)
			counter++;
		i++;
	}
	counter = counter + checkblock(pos_i, pos_j, curr_digit, argv);
	return (counter);
}

void	draw(int argc, char **argv, int digits)
{
	int i;
	int j;
	int check_for_rules;

	check_for_rules = 0;
	i = 1;
	while (argc > i)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != 46 && check(i, j, argv) != 3)
				check_for_rules = 1;
			j++;
		}
		i++;
	}
	
	if (check_for_rules == 1)
	{
		write(1, "Unacceptable sudoku", 19);
	}
	else
	{
		while (digits != 81)
		{
			i = 1;
			while (argc > i)
			{
				j = 0;
				while (argv[i][j])
				{
					if (argv[i][j] == 46)
						digits = put_digit(i, j, argv, digits);
					j++;
				}
				i++;
			}
		}
		i = 1;
		while (argc > i)
		{
			j = 0;
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;
	char *temp;
	int symbols;
	int digits;
	int switcher;

	switcher = 0;
	digits = 0;
	i = 1;
	if (argc == 10)
	{
		while (argc > i)
		{
			temp = argv[i];
			symbols = 0;
			while (*temp)
			{
				if (*temp != 46 && (*temp < 49 || *temp > 57))
				{
					write(1, "ErrorInput", 10);
					return (0);
				}
				if (*temp >= 49 && *temp <= 57)
					digits++;
				temp++;
				symbols++;
			}
			if (symbols != 9)
				switcher++;
			i++;
		}
		if (digits < 17 || switcher != 0)
			write(1, "Invalid sudoku", 14);
		else
			draw(argc, argv, digits);
	}
	else
		write(1, "ErrorParametersCount", 20);
	return (0);
}
