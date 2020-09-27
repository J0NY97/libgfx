/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gfx_new_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:46:42 by jsalmi            #+#    #+#             */
/*   Updated: 2020/09/27 12:50:11 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgfx.h"

t_vector	*gfx_new_vector(t_vertex *v1, t_vertex *v2)
{
	t_vector *vector;

	if (!(vector = (t_vector *)malloc(sizeof(t_vector))))
	{
		ft_putstr("Vector couldnt be malloced.\n");
		return (NULL);
	}
	vector->orig = v1;
	vector->dest = v2;
	return (vector);
}
