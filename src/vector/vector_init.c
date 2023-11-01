/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:09:21 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/01 14:30:45 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

int	vector_init(t_vector *vec, size_t capacity)
{
	vec->capacity = capacity;
	vec->total = 0;
	vec->array = malloc(sizeof (void *) * vec->capacity);
	if (vec->array == NULL)
		return (-1);
	return (0);
}
