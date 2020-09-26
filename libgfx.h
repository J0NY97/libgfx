/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:44:05 by jsalmi            #+#    #+#             */
/*   Updated: 2020/09/26 17:44:23 by jsalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGFX_H
# define LIBGFX_H
# include "libft.h"
# include "ft_printf.h"

typedef	struct	s_vertex		t_vertex;
typedef	struct	s_vector		t_vector;

struct				s_vertex
{
	int				x;
	int				y;
	int				z;
};

struct				s_vector
{
	t_vertex		*orig;
	t_vertex		*dest;
};

t_vertex			*gfx_new_vertex(int x, int y, int z);

#endif
