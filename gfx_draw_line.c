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

void				gfx_draw_line(SDL_Surface *surf, Uint32 color, t_vector *v1, t_vector *v2)
{
	int			cath_x;
	int			cath_y;
	int			x;
	int			y;
	int			overflow_x;
	int			overflow_y;

	cath_x = (v2->y - v1->y) < 0 ? (v2->y - v1->y) * -1 : (v2->y - v1->y);
	cath_y = (v2->x - v1->x) < 0 ? (v2->x - v1->x) * -1 : (v2->x - v1->x);
	overflow_y = cath_y - cath_x;
	x = v1->x;
	y = v1->y;
	while (x != v2->x || y != v2->y)
	{
		if (!(x < 0 || x >= surf->w || y < 0 || y >= surf->h))
			set_pixel(surf, x, y, color);
		overflow_x = overflow_y * 2;
		if (overflow_x > -(cath_x))
		{
			overflow_y -= cath_x;
			x += x < v2->x ? 1 : -1;
		}
		else if (overflow_x < cath_x)
		{
			overflow_y += cath_y;
			y += y < v2->y ? 1 : -1;
		}
	}
}
