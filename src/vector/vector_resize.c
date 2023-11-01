/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:18:37 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/01 14:31:09 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"
#include "../../inc/libft.h"

int	vector_resize(t_vector *vec, size_t count)
{
	void	**new_array;
	const size_t	original_size = sizeof (void *) * vec->total;
	const size_t	new_size = sizeof(void *) * count;

	new_array = ft_realloc(vec->array, original_size, new_size);
	if (new_array == NULL)
		return (-1);
	vec->array = new_array;
	vec->capacity = count;
	return (0);
}
