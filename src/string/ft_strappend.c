/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:03:57 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/01 16:48:40 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strappend(char *dest, const char *src)
{
	const size_t	len_dest = ft_strlen(dest);

	dest = ft_realloc(dest, len_dest + 1, len_dest + ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	return (ft_strcat(dest, src));
}

char	*xstrappend(char *dest, const char *src)
{
	const size_t	len_dest = ft_strlen(dest);

	dest = xrealloc(dest, len_dest + 1, len_dest + ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	return (ft_strcat(dest, src));
}
