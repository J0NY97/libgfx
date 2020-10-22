/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:44:05 by jsalmi            #+#    #+#             */
/*   Updated: 2020/09/27 12:50:40 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGFX_H
# define LIBGFX_H
# include "libft.h"
# include "libui.h"
# include "ft_printf.h"

typedef	struct	s_vector		t_vector;

struct				s_vector
{
	double			x;
	double			y;
	double			z;
};

t_vector			gfx_new_vector(double x, double y, double z);
void				gfx_vector_string(t_vector v);

int					gfx_vector_dot(t_vector curr, t_vector v1, t_vector v2); // should probably return double
double				gfx_distance(t_vector v1, t_vector v2);
t_vector			gfx_vector_multiply(t_vector v, int mult);

void				gfx_draw_vector(SDL_Surface *surface, Uint32 color, unsigned int size, t_vector v);
void				gfx_draw_line(SDL_Surface *surf, Uint32 color, t_vector v1, t_vector v2);
void				gfx_draw_rect(SDL_Surface *surface, Uint32 color, t_xywh dim);

int					gfx_hitbox_square(int x, int y, t_xywh rect);

#endif
