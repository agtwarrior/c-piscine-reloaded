/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <davguerr@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:26:31 by david             #+#    #+#             */
/*   Updated: 2026/09/23 12:22:19 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char	buffer[1024];
	int		fd;
	int		nbytes;

	if (argc < 2)
	{
		write(2, "File name missing", 18);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments", 19);
	}
	fd = open(argv[1], O_RDONLY);
	nbytes = 1;
	while (nbytes > 0)
	{
		nbytes = read(fd, buffer, 1024);
		if (nbytes > 0)
			write (1, buffer, nbytes);
	}
	close (fd);
	return (0);
}
