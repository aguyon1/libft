/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstall_of.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:56:52 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:10:25 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

bool	llstall_of(t_llist *llst, bool (*p)(void *))
{
	if (llst == NULL)
		return (1);
	return (p(llst->content) && llstall_of(llst->next, p));
}
