/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:35:27 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/01 14:36:26 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

void *vector_at(t_vector *vec, size_t index)
{
	if (index >= vec->total)
		return (-1);
	return (vec->array[index]);
}
