/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstadd_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:24:41 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:10:22 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

void	llstadd_front(t_llist **llst, t_llist *new)
{
	if (*llst != NULL)
		(*llst)->prev = new;
	new->next = *llst;
	*llst = new;
}
