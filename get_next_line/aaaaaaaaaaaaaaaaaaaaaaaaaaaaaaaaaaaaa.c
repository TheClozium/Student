/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:02:01 by socloza           #+#    #+#             */
/*   Updated: 2024/03/04 18:12:46 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 10

char *get_next_line(int fd)
{
    char *read_line;
    int size_buffer;

    read_line = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
      if (read_line == NULL)
        return (NULL);
    size_buffer = read(fd, read_line, BUFF_SIZE);
    if (size_buffer <= 0)
    {
        free (read_line);
        return (NULL);
    }

    read_line[size_buffer] = '\0';
    return (read_line);
}

int main()
{
    int fd;
    char *line;
    int count = 0;

    fd = open("boh.txt", O_RDONLY);
   // line = get_next_line(fd);
    while ((line = get_next_line(fd)) != NULL)
    {
        count++;
        if (line == NULL)
            break;
        printf("%s\n", line);
        free(line);
    }
    return (0);
}