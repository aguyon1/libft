/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:25:06 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/04 12:09:57 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

int	vector_push_back(t_vector *vec, void *item)
{
	int	status;

	status = 0;
	if (vec->capacity == vec->total)
		status = vector_resize(vec, vec->capacity * 2);
	if (status == 0)
		vec->array[vec->total++] = item;
	return (status);
}
