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

int		gfx_get_vertex_cross(t_vertex *curr, t_vertex *v1, t_vertex *v2)
{
	int v1x;
	int v1y;
	int v2x;
	int v2y;
	int	cross;

	v1x = curr->x - v1->x;
	v1y = curr->y - v1->y;
	v2x = v2->x - v1->x;
	v2y = v2->y - v1->y;
	cross = v1x * v2y - v1y * v2x;
	if (cross != 0)
		return (0);
	return (1);
}
