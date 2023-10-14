/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstdelone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:02:46 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:10:35 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

void	llstdelone(t_llist *llst, void (*del)(void *))
{
	if (llst == NULL || del == NULL)
		return ;
	del(llst->content);
	free(llst);
}
