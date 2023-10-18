/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:02:48 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/16 15:40:46 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strnappend(char *dest, const char *src, size_t n)
{
	const size_t	len_dest = ft_strlen(dest);

	dest = ft_realloc(dest, len_dest + 1, len_dest + n + 1);
	if (dest == NULL)
		return (NULL);
	return (ft_strncpy(dest + len_dest, src, n));
}

char	*xstrnappend(char *dest, const char *src, size_t n)
{
	const size_t	len_dest = ft_strlen(dest);

	dest = xrealloc(dest, len_dest + 1, len_dest + n + 1);
	if (dest == NULL)
		return (NULL);
	return (ft_strncpy(dest + len_dest, src, n));
}
