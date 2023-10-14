/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:24:27 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/14 16:37:11 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

#include <stdbool.h>

typedef void	*(*t_funptr)();
typedef bool	(*t_predicate)(void *);
typedef void	(*t_unary_fun)(void *);
typedef void	*(*t_unary_op)(void *);
typedef void	*(*t_binary_op)(void *, void *);
typedef void	(*t_del_fun)(void *);

#endif /* TYPES_H */
