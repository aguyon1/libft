/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:20:39 by aguyon            #+#    #+#             */
/*   Updated: 2023/11/04 15:26:41 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_H
# define ALGORITHM_H

# include <stddef.h>

typedef struct s_bsearch_arg
{
	const void	*key;
	const void	*base;
	size_t		nmemb;
	size_t		size;
	int			(*cmp)(const void *, const void *);
}	t_bsearch_arg;

void	*ft_bsearch(t_bsearch_arg arg);

#endif /* ALGORITHM_H */
