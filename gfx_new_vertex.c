/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gfx_new_vertex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:30:09 by jsalmi            #+#    #+#             */
/*   Updated: 2020/09/26 17:40:49 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgfx.h"

t_vertex	*gfx_new_vertex(int x, int y, int z)
{
	t_vertex *new_vertex;

	if (!(new_vertex = (t_vertex *)malloc(sizeof(t_vertex))))
	{
		ft_printf("Vertex couldnt be malloced");
		return (NULL);
	}
	new_vertex->x = x;
	new_vertex->y = y;
	new_vertex->z = z;
	return (new_vertex);
}
