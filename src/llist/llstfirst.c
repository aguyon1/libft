/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstfirst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:30:29 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:11:15 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

t_llist	*llstfirst(t_llist *llst)
{
	if (llstempty(llst))
		return (NULL);
	while (llst->prev != NULL)
		llst = llst->prev;
	return (llst);
}
