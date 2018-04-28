/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 12:44:18 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/26 09:37:58 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/main.h"

int			is_ok_to_write(t_gr *stc_gr, int y, int x, t_coord *lst_coord)
{
	int		size;
	char	**grid;

	size = (int)stc_gr->gd_side;
	grid = stc_gr->grid;
	if (grid[y][x] != '.')
		return (FALSE);
	if ((y + lst_coord[0].y < 0) || (x + (lst_coord[0].x)) < 0 || y +
		lst_coord[0].y > (size - 1) || (x + (lst_coord[0].x)) > (size - 1) ||
		grid[y + lst_coord[0].y][x + (lst_coord[0].x)] != '.' ||
		(y + lst_coord[1].y < 0) || (x + (lst_coord[1].x)) < 0 || (y +
		lst_coord[1].y) > (size - 1) || (x + (lst_coord[1].x)) > (size - 1) ||
		grid[y + lst_coord[1].y][x + (lst_coord[1].x)] != '.' ||
		(y + lst_coord[2].y < 0) || (x + (lst_coord[2].x)) < 0 ||
		y + lst_coord[2].y > (size - 1) || (x + (lst_coord[2].x) > (size - 1) ||
		grid[y + lst_coord[2].y][x + (lst_coord[2].x)] != '.'))
		return (FALSE);
	return (TRUE);
}

void		write_let(char **grid, t_coord gd_crd, char c, t_coord *piece_array)
{
	int	y;
	int	x;

	y = gd_crd.y;
	x = gd_crd.x;
	grid[y][x] = c;
	grid[y + piece_array[0].y][x + (piece_array[0].x)] = c;
	grid[y + piece_array[1].y][x + (piece_array[1].x)] = c;
	grid[y + piece_array[2].y][x + (piece_array[2].x)] = c;
}

void		write_point(char **grid, int y, int x, t_coord *lst_coord)
{
	grid[y][x] = '.';
	grid[y + lst_coord[0].y][x + (lst_coord[0].x)] = '.';
	grid[y + lst_coord[1].y][x + (lst_coord[1].x)] = '.';
	grid[y + lst_coord[2].y][x + (lst_coord[2].x)] = '.';
}

t_coord		mod_gd_crd(t_coord gd_crd, int pos, int gd_side)
{
	gd_crd.x = pos % gd_side;
	gd_crd.y = pos / gd_side;
	return (gd_crd);
}

t_pc_cnt	*modifies_pc_cnt(t_pc_cnt *pc_cnt)
{
	pc_cnt->current++;
	pc_cnt->carac = ('A' + (pc_cnt->total - pc_cnt->current));
	return (pc_cnt);
}
