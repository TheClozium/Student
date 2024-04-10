/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_prova.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:14:51 by socloza           #+#    #+#             */
/*   Updated: 2024/03/04 19:30:19 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 5

char	*get_next_line(int fd)
{
	static char	*line = NULL;
	int			size_buffer;

	line = (char *)malloc(sizeof(BUFFER_SIZE + 1));
	if (!line)
		return (NULL);
	size_buffer = read(fd, line, BUFFER_SIZE);
	if (size_buffer <= 0)
	{
		free (line);
		return (NULL);
	}
	line[size_buffer] = '\0';
	return (line);
}
/*
int	main(void)
{
	char	*read_line;
	int		fd;

	fd = open("boh.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	while ((read_line = get_next_line(fd)) != NULL)
	{
		if (!read_line)
		{
			close (fd);
			return (1);
		}
		printf("%s\n", read_line);
		free (read_line);
	}
	close (fd);
	return (0);
}*/
