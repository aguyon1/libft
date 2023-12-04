/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:00:48 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/04 19:46:30 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem), void (*del)(void *))
{
	t_list	*list;
	t_list	*list_last_node;
	t_list	*new_node;
	bool	first_loop;

	list = NULL;
	first_loop = true;
	while (lst != NULL)
	{
		new_node = f(lst);
		if (new_node == NULL)
			return (ft_lstdel(&list, del), NULL);
		if (first_loop == true)
		{
			list = new_node;
			list_last_node = new_node;
		}
		list_last_node->next = new_node;
		list_last_node = list_last_node->next;
		lst = lst->next;
		first_loop = false;
	}
	return (list);
}
