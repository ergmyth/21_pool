/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 18:05:08 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/06 21:44:00 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_param(char *param)
{
	while (*param)
	{
		ft_putchar(*param);
		param++;
	}
	ft_putchar('\n');
}

void	sort_params(int argc, char **argv)
{
	char	*temp1;
	char	*temp2;
	char	*temp3;
	int		k;

	k = 3;
	while (argc >= k)
	{
		temp1 = argv[k - 2];
		temp2 = argv[k - 1];
		while (*temp1 == *temp2 && temp1++)
			temp2++;
		if (*temp1 > *temp2)
		{
			temp3 = argv[k - 1];
			argv[k - 1] = argv[k - 2];
			argv[k - 2] = temp3;
			k = 3;
		}
		else
			k++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 2;
	sort_params(argc, argv);
	while (argc >= i)
	{
		print_param(argv[i - 1]);
		i++;
	}
	return (0);
}
