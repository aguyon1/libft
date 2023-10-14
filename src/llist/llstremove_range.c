/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstremove_range.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:41:11 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:12:29 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

void	llstremove_range(t_llist **begin_llst, t_llist *begin, t_llist *end,
	void (*del)(void *))
{
	t_llist	*temp;

	temp = llstextract_range(begin_llst, begin, end);
	llstclear(&temp, del);
}
