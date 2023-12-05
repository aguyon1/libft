/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:18:37 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/05 12:04:46 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

int	vector_resize(t_vector *vec, size_t count)
{
	void			**new_array;
	const size_t	original_size = vec->content_size * vec->total;
	const size_t	new_size = vec->content_size * count;

	if (count == 0)
		return (-1);
	new_array = ft_realloc(vec->array, original_size, new_size);
	if (new_array == NULL)
		return (-1);
	if (count < vec->total)
		vec->total = count;
	vec->array = new_array;
	vec->capacity = count;
	return (0);
}
