/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:31:50 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/26 18:45:41 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgfx.h"

int	gfx_vertex_on_vector(t_vertex *curr, t_vector *v)
{
	t_vertex *v1;
	t_vertex *v2;

	v1 = v->orig;
	v2 = v->dest;
	if (curr->x >= ft_min(v1->x, v2->x) && curr->x <= ft_max(v1->x, v2->x))
	{
		if (curr->y >= ft_min(v1->y, v2->y) && curr->y <= ft_max(v1->y, v2->y))
			return (1);
	}
	return (0);
}
