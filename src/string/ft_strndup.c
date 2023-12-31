/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:41:09 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/16 15:38:23 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char *const	res = malloc(n + 1);

	if (res != NULL)
		ft_strncpy(res, s, n);
	return (res);
}

char	*xstrndup(const char *s, size_t n)
{
	return (ft_strncpy(xmalloc(n + 1), s, n));
}
