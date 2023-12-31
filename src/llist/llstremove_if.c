/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstremove_if.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:00:21 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:12:21 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

void	llstremove_if(t_llist **llst, bool (*p)(void *), void (*del)(void *))
{
	t_llist	*current;
	t_llist	*next;

	current = *llst;
	while (current != NULL)
	{
		next = current->next;
		if (p(current->content))
			llstremoveone(llst, current, del);
		current = next;
	}
}
