/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llstnone_of.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:59:24 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:12:15 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/llist.h"

bool	llstnone_of(t_llist *llst, bool (*p)(void *))
{
	return (!llstall_of(llst, p));
}
