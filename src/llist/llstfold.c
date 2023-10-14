/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstfold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:15:26 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:11:20 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

void	*llstfold(t_llist *llst, void *acc, void *(*f)(void *, void *),
	void del(void *))
{
	if (llst == NULL)
		return (acc);
	acc = f(acc, llst->content);
	if (acc == NULL)
		return (del(acc), NULL);
	return (llstfold(llst->next, acc, f, del));
}
