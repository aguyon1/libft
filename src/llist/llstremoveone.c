/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstremoveone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:18:48 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:12:33 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

void	llstremoveone(t_llist **begin, t_llist *llst, void (*del)(void *))
{
	llst = llstextractone(begin, llst);
	llstclear(&llst, del);
}
