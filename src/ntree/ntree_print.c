/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ntree_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:26:00 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 11:09:57 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ntree.h"

static void	print_node(t_ntree *ntree, int depth, void (*print)(void *))
{
	if (depth != 0)
		ft_printf("+--- ");
	print(ntree->data);
	ft_printf("\n");
}

static void	print_tree_rec(t_ntree *ntree, bool flag[256], t_node_info info,
	void (*print)(void *))
{
	const t_llist	*current_child = ntree->children;
	int				i;
	t_node_info		info_child;

	if (ntree == NULL)
		return ;
	i = 0;
	while (++i < info.depth)
	{
		if (flag[i] == true)
			ft_printf("|     ");
		else
			ft_printf("     ");
	}
	if (info.depth == 0 || !info.islast)
		print_node(ntree, info.depth, print);
	else
		(print_node(ntree, info.depth, print), flag[info.depth] = false);
	while (current_child != NULL)
	{
		info_child = (t_node_info){info.depth + 1, current_child->next == NULL};
		print_tree_rec(current_child->content, flag, info_child, print);
		current_child = current_child->next;
	}
	flag[info.depth] = true;
}

void	ntree_print(t_ntree *ntree, void (*print)(void *))
{
	bool	flag[256];

	memset(flag, 1, 256);
	print_tree_rec(ntree, flag, (t_node_info){.depth = 0, .islast = 0}, print);
}
