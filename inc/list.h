/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:06:48 by aguyon            #+#    #+#             */
/*   Updated: 2024/01/02 17:09:18 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
#define LIST_H

#include <stddef.h>
#include <stdbool.h>

#define container_of(ptr, type, member) \
({ \
	const typeof(((type *)0)->member) *__mptr = (ptr); \
	(type *)((char *)__mptr - offsetof(type, member)); \
}) \

struct list_head
{
	struct list_head	*prev;
	struct list_head	*next;
};

#define LIST_HEAD_INIT(name) {&(name), &(name)};

#define LIST_HEAD(name) struct list_head name = LIST_HEAD_INIT(name)

void	init_list_head(struct list_head *list);
void	list_add(struct list_head *new, struct list_head *head);
void	list_add_tail(struct list_head *new, struct list_head *head);
void	list_del(struct list_head *entry);
void	list_replace(struct list_head *old, struct list_head *new);
void	list_replace_init(struct list_head *old, struct list_head *new);
void	list_swap(struct list_head *entry1, struct list_head *entry2);
void	list_del_init(struct list_head *entry);
void	list_move(struct list_head *list, struct list_head *head);
void	list_move_tail(struct list_head *list, struct list_head *head);
bool	list_is_first(const struct list_head *list, const struct list_head *head);
bool	list_is_last(const struct list_head *list, const struct list_head *head);
bool	list_is_head(const struct list_head *list, const struct list_head *head);
bool	list_empty(const struct list_head *head);
bool	list_is_singular(const struct list_head *head);
void	list_rotate_left(struct list_head *head);
void	list_rotate_to_front(struct list_head *list, struct list_head *head);
void	list_splice(const struct list_head *list, struct list_head *head);
void	list_splice_tail(struct list_head *list, struct list_head *head);
void	list_cut(struct list_head *list, struct list_head *head, struct list_head *entry);
void	list_cut_before(struct list_head *list, struct list_head *head, struct list_head *entry);

#define list_entry(ptr, type, member) \
	container_of(ptr, type, member)

#define list_first_entry(ptr, type, member) \
	list_entry((ptr)->next, type, member)

#define list_last_entry(ptr, type, member) \
	list_entry((ptr)->prev, type, member)

#define list_entry_is_head(pos, head, member) \
	(&pos->member == (head))

#define list_next_entry(pos, member) \
	list_entry((pos)->member.next, typeof(*(pos)), member)

#define list_prev_entry(pos, member) \
	list_entry((pos)->member.prev, typeof(*(pos)), member)

#define list_for_each(pos, head) \
	for (pos = (head)->next; !list_is_head(pos, (head)); pos = pos->next)

#define list_for_each_prev(pos, head) \
	for (pos = (head)->prev; !list_is_head(pos, (head)); pos = pos->prev)

#define list_for_each_safe(pos, n, head) \
	for (pos = (head)->next, n = pos->next; !list_is_head(pos, (head)); pos = n, n = pos->next)

#define list_for_each_prev_safe(pos, n, head) \
	for (pos = (head)->prev, n = pos->prev; !list_is_head(pos, (head)); pos = n, n = pos->prev)

#define list_for_each_from(pos, head, member) \
	for (; !list_entry_is_head(pos, head, member); pos = list_next_entry(pos, member))

#define list_for_each_from_reverse(pos, head, member) \
	for (; !list_entry_is_head(pos, head, member); pos = list_prev_entry(pos, member))

#define list_for_each_entry(pos, head, member) \
	for (pos = list_first_entry(head, typeof(*pos), member); !list_entry_is_head(pos, head, member); pos = list_next_entry(pos, member))

#define list_for_each_entry_safe(pos, n, head, member) \
	for (pos = list_first_entry(head, typeof(*pos), member), n = list_next_entry(pos, member); !list_entry_is_head(pos, head, member); pos = n, n = list_next_entry(n, member))

#define list_for_each_entry_safe_from(pos, n, head, member) \
	for (n = list_next_entry(pos, member); !list_entry_is_head(pos, head, member); pos = n, n = list_next_entry(n, member))

#define list_for_each_entry_safe_reverse(pos, n, head, member) \
	for (pos = list_last_entry(head, typeof(*pos), member), n = list_prev_entry(pos, member); !list_entry_is_head(pos, head, member); pos = n, n = list_prev_entry(n, member))

#endif /* LIST_H */
