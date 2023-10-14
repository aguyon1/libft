/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstextractone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:29:19 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:10:58 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

t_llist	*llstextractone(t_llist **begin_llst, t_llist *llst)
{
	t_llist	*prev;
	t_llist	*next;

	if (*begin_llst == NULL || llst == NULL)
		return (NULL);
	if (llst->prev == NULL)
		*begin_llst = (*begin_llst)->next;
	prev = llst->prev;
	next = llst->next;
	if (llst->prev != NULL)
		prev->next = next;
	if (next != NULL)
		next->prev = prev;
	*llst = (t_llist){llst->content, NULL, NULL};
	return (llst);
}
