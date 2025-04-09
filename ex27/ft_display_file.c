/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:33:36 by tomandra          #+#    #+#             */
/*   Updated: 2025/04/09 02:13:55 by tomandra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(const char *filename)
{
	char	str[4096];
	int		fd;
	int		bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	bytes_read = read(fd, str, 4096);
	while (bytes_read > 0)
	{
		write(1, &str, bytes_read);
		bytes_read--;
		bytes_read = read(fd, str, 4096);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	const char	*filename;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	else
	{
		filename = argv[1];
		ft_display_file(filename);
		return (0);
	}
}
