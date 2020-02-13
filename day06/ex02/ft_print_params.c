/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 18:04:36 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/06 21:45:08 by eleonard         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int i;

	i = 2;
	while (argc >= i)
	{
		print_param(argv[i - 1]);
		i++;
	}
	return (0);
}
