/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:44:34 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/04 12:06:16 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

void	vector_clear(t_vector *vec, void (*del)(void *))
{
	size_t	i;

	if (del != NULL)
	{
		i = 0;
		while (i < vec->total)
		{
			del(vec->array[i]);
			i++;
		}
	}
	free(vec->array);
	vec->array = NULL;
}
