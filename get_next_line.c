/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:50:16 by manuel            #+#    #+#             */
/*   Updated: 2021/03/23 22:32:36 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	get_next_line(int fd, char **line)
{
	int		size;
	char	*buf;

	(void)line;
	if (fd == -1)
		return (-1);
	buf = (char *)malloc(sizeof(*buf) * (BUFFER_SIZE + 1));
	if (!buf)
		return (-1);
	size = read(fd, buf, BUFFER_SIZE);
	if (size >= 0)
	{
		*(buf + size) = '\0';
		*line = buf;
	}
	printf("size: %d\n", size);
	if (size < 1)
	{
		if (size == -1)
			free(buf);
		return (size);
	}
		/*
	while ((size = read(fd, buf, BUFFER_SIZE)))
	{
		if (size == -1)
		{
			put_errno(self, filepath);
			break ;
		}
		buf[size] = 0;
		ft_putstr(buf);
	}*/
	return (1);
}
