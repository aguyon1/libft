/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libopen.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:27:02 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/13 17:13:47 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBOPEN_H
# define LIBOPEN_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdbool.h>
# include "alloc.h"

typedef enum e_fd_flag
{
	FD_OPEN = 0b00000001,
	FD_CLOSE = 0b00000010,
	FD_CLOSE_ALL = 0b00000100,
}	t_fd_flag;

/* FUNCTIONS */
int		xopen(const char *pathname, int flags);
int		xopen_mode(const char *pathname, int flags, mode_t mode);
void	xclose_all(void);
int		xclose(int fd);

/* UTILS */
void	handle_fds_array(int fd, t_fd_flag flags);

#endif /* LIBOPEN_H */
