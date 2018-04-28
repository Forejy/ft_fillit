/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:22:25 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/19 16:28:47 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
# define GRID_H

# include <stdlib.h>

typedef struct	s_grid
{
	char		**grid;
	size_t		gd_side;
}				t_gr;

size_t			find_min_size_square(int	count_piece);
t_gr			*create_grid(size_t size);
void			destroy_grid(t_gr *grid);

#endif
