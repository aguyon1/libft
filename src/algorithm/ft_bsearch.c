/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsearch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:19:57 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/04 15:22:07 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/algorithm.h"

void	*ft_bsearch(t_bsearch_arg arg)
{
	const char	*cbase = (const char *)arg.base;
	int			lim;
	int			cmp_res;
	const void	*ptr;

	lim = arg.nmemb;
	while (lim != 0)
	{
		ptr = cbase + (lim >> 1) * arg.size;
		cmp_res = arg.cmp(arg.key, ptr);
		if (cmp_res == 0)
			return ((void *)ptr);
		if (cmp_res > 0)
		{
			cbase = (const char *)ptr + arg.size;
			lim--;
		}
		lim >>= 1;
	}
	return (NULL);
}
