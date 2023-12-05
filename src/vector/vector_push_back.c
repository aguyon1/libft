/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:25:06 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/05 12:06:45 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

int	vector_push_back(t_vector *vec, void *const item)
{
	int	status;

	status = 0;
	if (vec->capacity == vec->total)
		status = vector_resize(vec, vec->capacity * 2);
	if (status == 0)
	{
		ft_memcpy(vec->array + (vec->total * vec->content_size), item,
			vec->content_size);
		vec->total++;
	}
	return (status);
}
