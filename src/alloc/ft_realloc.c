/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:51:35 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/01 16:21:06 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_realloc(void *ptr, size_t original_size, size_t size)
{
	void	*new_ptr;

	if (ptr == NULL)
		return (malloc(size));
	if (size == 0)
		return (free(ptr), NULL);
	new_ptr = malloc(size);
	if (new_ptr == NULL)
		return (NULL);
	ft_memcpy(new_ptr, ptr, original_size);
	return (free(ptr), new_ptr);
}

void	*xrealloc(void *ptr, size_t original_size, size_t size)
{
	void	*new_ptr;

	if (ptr == NULL)
		return (xmalloc(size));
	if (size == 0)
		return (xfree(ptr), NULL);
	new_ptr = xmalloc(size);
	if (new_ptr == NULL)
		return (NULL);
	ft_memcpy(new_ptr, ptr, original_size);
	return (xfree(ptr), new_ptr);
}
