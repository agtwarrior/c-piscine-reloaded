/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <davguerr@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:26:31 by david             #+#    #+#             */
/*   Updated: 2026/09/26 18:47:01 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

static int	arg_errors(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

static int	read_open_error(void)
{
	write (2, "Cannot read file.\n", 18);
	return (1);
}

int	main(int argc, char **argv)
{
	char	buffer[1024];
	int		fd;
	int		nbytes;

	if (arg_errors(argc) == 1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (read_open_error());
	nbytes = 1;
	while (nbytes > 0)
	{
		nbytes = read(fd, buffer, 1024);
		if (nbytes == -1)
		{
			close (fd);
			return (read_open_error());
		}
		if (nbytes > 0)
			write (1, buffer, nbytes);
	}
	close (fd);
	return (0);
}
