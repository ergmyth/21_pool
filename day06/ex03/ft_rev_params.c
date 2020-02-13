/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 18:04:53 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/06 21:44:53 by eleonard         ###   ########.fr       */
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
	while (argc >= 2)
	{
		print_param(argv[argc - 1]);
		argc--;
	}
	return (0);
}
