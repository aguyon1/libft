/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xopen.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:29:30 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/13 16:14:52 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libopen.h"

int	xopen(const char *pathname, int flags)
{
	int	fd;

	fd = open(pathname, flags);
	if (fd >= 0)
		handle_fds_array(fd, FD_OPEN);
	return (fd);
}

int	xopen_mode(const char *pathname, int flags, mode_t mode)
{
	int	fd;

	fd = open(pathname, flags, mode);
	if (fd >= 0)
		handle_fds_array(fd, FD_OPEN);
	return (fd);
}
