/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:35:27 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/05 11:50:58 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

int	vector_at(t_vector *vec, size_t index, void *ret)
{
	if (index >= vec->total)
		return (-1);
	ft_memcpy(ret, vec->array + (vec->content_size * index), vec->content_size);
	return (0);
}
