/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:11:17 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/16 15:37:32 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strdup(const char *s)
{
	char *const	res = malloc(strlen(s) + 1);

	if (res != NULL)
		ft_strcpy(res, s);
	return (res);
}

char	*xstrdup(const char *s)
{
	return (ft_strcpy(xmalloc(ft_strlen(s) + 1), s));
}

/*
static	char f(__attribute__((unused))unsigned int i, char c)
{
	return (c);
}

char	*ft_strdup(const char *s)
{
	return (ft_strmapi(s, f));
}
*/
