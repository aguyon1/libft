/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:06:18 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/04 19:25:48 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	current_node = *alst;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		ft_lstdelone(&current_node, del);
		current_node = next_node;
	}
	*alst = NULL;
}
