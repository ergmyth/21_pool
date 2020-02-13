/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 17:36:30 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/06 21:45:37 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_name(char *name)
{
	while (*name)
	{
		ft_putchar(*name);
		name++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	print_name(argv[0]);
	return (0);
}
