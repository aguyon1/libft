/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_fds_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:33:08 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/13 17:13:22 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libopen.h"

void	handle_fds_array(int fd, t_fd_flag flags)
{
	static bool		fds[1025];
	int				i;

	if (flags & FD_OPEN)
		fds[fd] = true;
	else if (flags & FD_CLOSE)
		fds[fd] = false;
	else if (flags & FD_CLOSE_ALL)
	{
		i = 3;
		while (i <= 1024)
		{
			if (fds[i] == true)
			{
				fds[i] = false;
				close(i);
			}
			i++;
		}
	}
}
