/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:33:16 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/05 12:06:50 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

int	vector_set(t_vector *vec, size_t index, void *const item)
{
	if (index >= vec->total)
		return (-1);
	ft_memcpy(vec->array + (index * vec->content_size), item,
		vec->content_size);
	return (0);
}
