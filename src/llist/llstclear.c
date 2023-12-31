/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstclear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:01:16 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:10:32 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

void	llstclear(t_llist **llst, void *del)
{
	t_llist	*next;
	t_llist	*current;

	if (llst == NULL || del == NULL)
		return ;
	current = *llst;
	while (current != NULL)
	{
		next = current->next;
		llstdelone(current, del);
		current = next;
	}
	*llst = NULL;
}
