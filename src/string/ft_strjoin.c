/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:06:39 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/16 15:38:03 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *const	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);

	if (res != NULL)
		ft_strcat(ft_strcpy(res, s1), s2);
	return (res);
}

char	*xstrjoin(char const *s1, char const *s2)
{
	const size_t	len = ft_strlen(s1) + ft_strlen(s2);

	return (ft_strcat(ft_strcpy(xmalloc(len + 1), s1), s2));
}
