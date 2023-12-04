/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:33:16 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/01 14:35:07 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

int	vector_set(t_vector *vec, size_t index, void *item)
{
	if (index >= vec->total)
		return (-1);
	vec->array[index] = item;
	return (0);
}
