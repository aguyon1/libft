/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:27:27 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/04 19:56:14 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *))
{
	t_list	*node;

	node = *alst;
	if (del)
		del(node->content);
	free(node);
	*alst = NULL;
}
