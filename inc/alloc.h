/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:18:49 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/13 17:05:09 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOC_H
# define ALLOC_H

# include <stdlib.h>
# include <stddef.h>

typedef enum e_alloc_flag
{
	ALLOC = 0b00000001,
	FREE = 0b00000010,
	FREEALL = 0b00000100,
}	t_alloc_flag;

typedef struct s_memory_list	t_memory_list;

struct s_memory_list
{
	struct s_memory_list	*prev;
	struct s_memory_list	*next;
	void					(*dtor)(void *);
	char					memory[1];
};

/* LIBRARY FUNCTIONS */
void			*xmalloc(size_t size);
void			*xmalloc_dtor(size_t size, void *dtor);
void			xfree(void *ptr);
void			xfree_all(void);
void			*xmalloc_no_exit(size_t size);
void			*xmalloc_dtor_no_exit(size_t size, void *dtor);

/*	UTILS	*/
void			handle_memory_list(t_memory_list *node, t_alloc_flag flag);
void			memory_list_add(t_memory_list **glist, t_memory_list *node);
t_memory_list	*memory_list_new(size_t size, void *del);
void			memory_list_clear(t_memory_list **list);
t_memory_list	*memory_list_get_node(void *memory);

#endif
