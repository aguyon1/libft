/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:05:24 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/05 12:10:50 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include <stddef.h>
# include <stdlib.h>
# include "libft.h"

# define DEFAULT_VECTOR_CAPACITY 16

typedef struct s_vector
{
	void	*array;
	size_t	content_size;
	size_t	capacity;
	size_t	total;
}	t_vector;

int		vector_init(t_vector *vec, size_t capacity, size_t content_size);
int		vector_resize(t_vector *vec, size_t count);
int		vector_push_back(t_vector *vec, void *const item);
int		vector_set(t_vector *vec, size_t index, void *const item);
int		vector_at(t_vector *vec, size_t index, void *ret);
// int		vector_delone(t_vector *vec, size_t index, void (*del)(void *));
void	vector_clear(t_vector *vec);
size_t	vector_size(t_vector *vec);

#endif
