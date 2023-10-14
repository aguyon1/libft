/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstfind.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:51:55 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:11:12 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

t_llist	*llstfind(t_llist *llst, void *value, int (*comp)(void *, void *))
{
	t_llist	*current;

	current = llst;
	while (current != NULL)
		if (comp(current->content, value) == 0)
			return (value);
	return (NULL);
}
