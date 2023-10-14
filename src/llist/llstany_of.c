/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstany_of.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:59:05 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:10:28 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

bool	llstany_of(t_llist *llst, bool (*p)(void *))
{
	if (llst == NULL)
		return (0);
	return (p(llst->content) || llstany_of(llst->next, p));
}
