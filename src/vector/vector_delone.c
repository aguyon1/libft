/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_delone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:38:32 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/01 14:46:06 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

int	vector_delone(t_vector *vec, size_t index, void (*del)(void *))
{
	size_t	i;

	if (index >= vec->total)
		return (-1);
	if (del != NULL)
		del(vec->array[index]);
	vec->array[index] = NULL;
	i = index;
	while (i < vec->total -1)
	{
		vec->array[i] = vec->array[i + 1];
		vec->array[i + 1] = NULL;
		i++;
	}
	vec->total--;
	return (0);
}
