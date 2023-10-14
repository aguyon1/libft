/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ntree_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:19:29 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:09:54 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ntree.h"

t_ntree	*ntree_new(void *data, t_llist *children)
{
	t_ntree *const	new = xmalloc(sizeof(t_ntree));

	*new = (t_ntree){data, children};
	return (new);
}
