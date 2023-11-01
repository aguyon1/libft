/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:05:24 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/01 14:49:32 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>

typedef struct s_vector
{
	void	**array;
	size_t	item_size;
	size_t	capacity;
	size_t	total;
}	t_vector;

int		vector_init(t_vector *vec, size_t capacity, size_t item_size);
int		vector_resize(t_vector *vec, size_t count);
int		vector_push_back(t_vector *vec, void *item);
int		vector_set(t_vector *vec, size_t index, void *item);
void	*vector_at(t_vector *vec, size_t index);
int		vector_delone(t_vector *vec, size_t index, void (*del)(void *));
void	vector_free(t_vector *vec, void (*del)(void *));

#endif
