/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:22:46 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/07 14:24:58 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/vector.h"

t_vector	*vector_new(size_t capacity, size_t content_size)
{
	t_vector	*new;

	new = malloc(sizeof(t_vector));
	if (new == NULL)
		return (NULL);
	if (vector_init(new, capacity, content_size) < 0)
		return (free(new), NULL);
	return (new);
}
