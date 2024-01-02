/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:43:46 by aguyon            #+#    #+#             */
/*   Updated: 2024/01/02 16:33:58 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

void	init_list_head(struct list_head *list)
{
	list->next = list;
	list->prev = list;
}

static void	__list_add(struct list_head *new, struct list_head *prev, struct list_head *next)
{
	next->prev = new;
	new->next = next;
	new->prev = prev;
	prev->next = new;
}

void	list_add(struct list_head *new, struct list_head *head)
{
	__list_add(new, head, head->next);
}

void	list_add_tail(struct list_head *new, struct list_head *head)
{
	__list_add(new, head->prev, head);
}

static void	__list_del(struct list_head *prev, struct list_head *next)
{
	next->prev = prev;
	prev->next = next;
}

static void	__list_del_entry(struct list_head *entry)
{
	__list_del(entry->prev, entry->next);
}

void	list_del(struct list_head *entry)
{
	__list_del(entry->prev, entry->next);
	entry->next = NULL;
	entry->prev = NULL;
}

void	list_replace(struct list_head *old, struct list_head *new)
{
	new->next = old->next;
	new->next->prev = new;
	new->prev = old->prev;
	new->prev->next = new;
}

void	list_replace_init(struct list_head *old, struct list_head *new)
{
	list_replace(old, new);
	init_list_head(old);
}

void	list_swap(struct list_head *entry1, struct list_head *entry2)
{
	struct list_head *temp = entry2->prev;

	list_del(entry2);
	list_replace(entry1, entry2);
	if (temp == entry1)
		temp = entry2;
	list_add(entry1, temp);
}

void	list_del_init(struct list_head *entry)
{
	__list_del_entry(entry);
	init_list_head(entry);
}

void	list_move(struct list_head *list, struct list_head *head)
{
	__list_del_entry(list);
	list_add(list, head);
}

void	list_move_tail(struct list_head *list, struct list_head *head)
{
	__list_del_entry(list);
	list_add_tail(list, head);
}

bool	list_is_first(const struct list_head *list, const struct list_head *head)
{
	return (list->prev == head);
}

bool	list_is_last(const struct list_head *list, const struct list_head *head)
{
	return (list->next == head);
}

bool	list_is_head(const struct list_head *list, const struct list_head *head)
{
	return (list == head);
}

bool	list_empty(const struct list_head *head)
{
	return (head->next == head);
}

bool	list_is_singular(const struct list_head *head)
{
	return (!list_empty(head) && (head->next == head->prev));
}

void	list_rotate_left(struct list_head *head)
{
	struct list_head *first;

	if (!list_empty(head))
	{
		first = head->next;
		list_move_tail(first, head);
	}
}

void	list_rotate_to_front(struct list_head *list, struct list_head *head)
{
	list_move_tail(head, list);
}

static void	__list_splice(const struct list_head *list, struct list_head *prev, struct list_head *next)
{
	struct list_head *first = list->next;
	struct list_head *last = list->prev;

	first->prev = prev;
	prev->next = first;

	last->next = next;
	next->prev = last;
}

void	list_splice(const struct list_head *list, struct list_head *head)
{
	if (!list_empty(list))
		__list_splice(list, head, head->next);
}

void	list_splice_tail(struct list_head *list, struct list_head *head)
{
	if (!list_empty(list))
		__list_splice(list, head->prev, head);
}

static void	__list_cut(struct list_head *list, struct list_head *head, struct list_head *entry)
{
	struct list_head *new_first = entry->next;

	list->next = head->next;
	list->next->prev = list;
	list->prev = entry;
	entry->next = list;
	head->next = new_first;
	new_first->prev = head;
}

void	list_cut(struct list_head *list, struct list_head *head, struct list_head *entry)
{
	if (list_empty(head))
		return ;
	if (list_is_singular(head) && (head->next != entry && head != entry))
		return ;
	if (entry == head)
		init_list_head(list);
	else
		__list_cut(list, head, entry);
}

void	list_cut_before(struct list_head *list, struct list_head *head, struct list_head *entry)
{
	if (head->next == entry)
	{
		init_list_head(list);
		return ;
	}
	list->next = head->next;
	list->next->prev = list;
	list->prev = entry->prev;
	list->prev->next = list;
	head->next = entry;
	entry->prev = head;
}
