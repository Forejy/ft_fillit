/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:45:22 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/19 16:46:12 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zconf.h>
#include "../Includes/grid.h"
#include "../Includes/errors.h"

size_t	find_min_size_square(int count_piece)
{
	if (count_piece == 1)
		return (2);
	if (count_piece == 2)
		return (3);
	if (count_piece >= 3 && count_piece <= 4)
		return (4);
	if (count_piece >= 5 && count_piece <= 6)
		return (5);
	if (count_piece >= 7 && count_piece <= 9)
		return (6);
	if (count_piece >= 10 && count_piece <= 12)
		return (7);
	if (count_piece >= 13 && count_piece <= 16)
		return (8);
	if (count_piece >= 17 && count_piece <= 20)
		return (9);
	if (count_piece >= 21 && count_piece <= 25)
		return (10);
	else
		return (11);
}

t_gr	*create_grid(size_t size)
{
	t_gr			*current_gr;
	char			**the_grid;
	unsigned int	y;
	unsigned int	x;

	if (!(current_gr = (t_gr *)malloc(sizeof(t_gr)))
		|| !(the_grid = (char **)malloc(sizeof(char *) * (size + 1))))
		exit_with_msg(ERROR_MALLOC_FAIL);
	y = 0;
	while (y < size)
	{
		x = 0;
		if (!(the_grid[y] = (char *)malloc(sizeof(char) * (size + 1))))
			exit_with_msg(ERROR_MALLOC_FAIL);
		while (x < size)
		{
			the_grid[y][x] = '.';
			x++;
		}
		the_grid[y++][size] = '\0';
	}
	the_grid[size] = NULL;
	current_gr->grid = the_grid;
	current_gr->gd_side = size;
	return (current_gr);
}
