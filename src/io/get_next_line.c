/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:48:42 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/16 15:13:28 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = {0};
	char		*line;
	ssize_t		nb_bytes;
	size_t		pos;

	nb_bytes = 0;
	pos = ft_strcspn(buffer, "\n");
	line = ft_strndup(buffer, pos + (buffer[pos] == '\n'));
	while (line != NULL && buffer[pos] != '\n')
	{
		nb_bytes = read(fd, buffer, BUFFER_SIZE);
		if (nb_bytes <= 0)
			break ;
		buffer[nb_bytes] = '\0';
		pos = ft_strcspn(buffer, "\n");
		line = ft_strnappend(line, buffer, pos + (buffer[pos] == '\n'));
	}
	if (line == NULL || *line == '\0' || nb_bytes == -1)
		return (free(line), NULL);
	ft_strcpy(buffer, buffer + pos + (buffer[pos] == '\n'));
	return (line);
}

char	*xget_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = {0};
	char		*line;
	ssize_t		nb_bytes;
	size_t		pos;

	nb_bytes = 0;
	pos = ft_strcspn(buffer, "\n");
	line = xstrndup(buffer, pos + (buffer[pos] == '\n'));
	while (buffer[pos] != '\n')
	{
		nb_bytes = read(fd, buffer, BUFFER_SIZE);
		if (nb_bytes <= 0)
			break ;
		buffer[nb_bytes] = '\0';
		pos = ft_strcspn(buffer, "\n");
		line = xstrnappend(line, buffer, pos + (buffer[pos] == '\n'));
	}
	if (*line == '\0' || nb_bytes == -1)
		return (NULL);
	ft_strcpy(buffer, buffer + pos + (buffer[pos] == '\n'));
	return (line);
}
