/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:25:49 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/04/28 19:21:29 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		display(char *argv);

void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		display(argv[1]);
	return (0);
}

int	display(char *argv)
{
	int		fd;
	char	buffer[65535];

	fd = open(argv, O_RDONLY);
	if (fd < 0)
		return (-1);
	if (!(read(fd, buffer, 65535)))
	{
		ft_putstr("An error occurred while trying to read the file.\n");
		close(fd);
	}	
	ft_putstr(buffer);
	close(fd);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
