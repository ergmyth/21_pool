/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:27:43 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/15 10:23:40 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_stdin(void)
{
	char buffer;

	while (read(0, &buffer, 1))
		write(1, &buffer, 1);
}

void	ft_err(int i, char *name)
{
	write(1, "./ft_cat: ", 10);
	while (*name)
	{
		write(1, &(*name), 1);
		name++;
	}
	if (i == 1)
		write(1, ": Is a directory\n", 17);
	else if (i == 2)
		write(1, ": No such file or directory\n", 28);
	else if (i == 3)
		write(1, ": Permission denied\n", 20);
}

void	ft_display(int fd, char *name)
{
	char buffer;

	if (*name == '-' && *(name + 1) == '\0')
		ft_stdin();
	else
	{
		if (fd >= 0)
			while (read(fd, &buffer, 1))
			{
				write(1, &buffer, 1);
				if (errno == EISDIR)
				{
					ft_err(1, name);
					return ;
				}
			}
		else
		{
			if (errno == ENOENT)
				ft_err(2, name);
			else if (errno == EACCES)
				ft_err(3, name);
		}
	}
}

int		main(int argc, char **argv)
{
	int fd;
	int i;

	i = 1;
	if (argc < 2 || argv[1][0] == '-')
		ft_stdin();
	else if (argc > 1)
	{
		while (argc > i)
		{
			fd = open(argv[i], O_RDONLY);
			ft_display(fd, argv[i]);
			close(fd);
			i++;
		}
	}
	return (0);
}
