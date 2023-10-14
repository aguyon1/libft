/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstsize_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:03:08 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:12:39 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

size_t	llstsize_range(t_llist *begin, t_llist *end)
{
	if (begin == NULL || begin == end)
		return (0);
	return (1 + llstsize_range(begin->next, end));
}
