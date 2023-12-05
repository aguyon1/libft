/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:09:21 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/05 12:10:15 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

int	vector_init(t_vector *vec, size_t capacity, size_t content_size)
{
	vec->capacity = capacity;
	vec->total = 0;
	vec->content_size = content_size;
	vec->array = malloc(vec->content_size * vec->capacity);
	if (vec->array == NULL)
		return (-1);
	return (0);
}
