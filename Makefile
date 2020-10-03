# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsalmi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 15:28:58 by jsalmi            #+#    #+#              #
#    Updated: 2020/09/27 12:51:14 by jsalmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libgfx.a
SRCS = gfx_new_vertex.c \
	   gfx_new_vector.c \
		gfx_draw_vector.c \
		gfx_get_vertex_cross.c \
		gfx_get_vertex_dot.c \
		gfx_vertex_on_vector.c
OBJS = $(SRCS:.c=.o)
INCLUDES = -I ../libft -I ../ft_printf -I ../libui
LIBS = libgfx.h
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -c $(SRCS) $(FLAGS) $(INCLUDES)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@/bin/rm -f $(OBJS)
	@echo "$(NAME) was successfully created."

clean:
	@/bin/rm -f $(OBJS)
	@echo "$(NAME) was cleaned."

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean, all, fclean, re
