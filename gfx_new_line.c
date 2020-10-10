/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:07:25 by jsalmi            #+#    #+#             */
/*   Updated: 2020/09/27 16:30:53 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgfx.h"

// Not sure if the line should be copies of orig and dest or just the actual ones...
t_line		*gfx_new_line(t_vector *orig, t_vector *dest)
{
	t_line *new_line;

	if (!(new_line = (t_line *)malloc(sizeof(t_line))))
	{
		ft_printf("New line couldnt be malloced\n");
		return (NULL);
	}
	new_line->dest = dest;
	new_line->orig = orig;
	return (new_line);
}
