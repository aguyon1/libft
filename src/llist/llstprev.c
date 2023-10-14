/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstprev.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:07:59 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:12:18 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

t_llist	*llstprev(t_llist *llst, size_t n)
{
	if (n == 0 || llst == NULL)
		return (llst);
	return (llstprev(llst->prev, n - 1));
}
