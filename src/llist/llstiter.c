/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstiter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:08:32 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:11:45 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

void	llstiter(t_llist *llst, void (*f)(void *))
{
	if (llst == NULL)
		return ;
	f(llst->content);
	llstiter(llst->next, f);
}
