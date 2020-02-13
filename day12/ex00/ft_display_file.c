/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:01:09 by eleonard          #+#    #+#             */
/*   Updated: 2019/02/14 19:36:03 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	buffer;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, &buffer, 1))
			write(1, &buffer, 1);
		close(fd);
	}
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	return (0);
}
