/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:35:27 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/04 12:27:13 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

void	*vector_at(t_vector *vec, size_t index)
{
	if (index >= vec->total)
		return (NULL);
	return (vec->array[index]);
}
