/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 09:22:55 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/26 13:06:29 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/resolver.h"
#include "../Includes/reader.h"
#include "../Includes/writer.h"
#include "../Includes/errors.h"

int		is_valid(t_gr *stc_gr, t_coord **lst_coord, t_pc_cnt *pc_cnt, int pos)
{
	t_coord	gd_crd;

	while (pc_cnt->current != 0)
	{
		while (pos < (int)stc_gr->gd_side * (int)stc_gr->gd_side)
		{
			gd_crd = mod_gd_crd(gd_crd, pos++, (int)(stc_gr->gd_side));
			if (is_ok_to_write(stc_gr, gd_crd.y, gd_crd.x, *lst_coord))
			{
				pc_cnt->carac = ('A' + (pc_cnt->total - pc_cnt->current));
				write_let(stc_gr->grid, gd_crd, pc_cnt->carac, *lst_coord);
				(*lst_coord++)->pos = --pos;
				if (!(pos = 0) && pc_cnt->current-- && pc_cnt->current == 0)
					return (TRUE);
			}
		}
		if (pc_cnt->current == pc_cnt->total)
			return (FALSE);
		pc_cnt = modifies_pc_cnt(pc_cnt);
		gd_crd = mod_gd_crd(gd_crd, (*--lst_coord)->pos, stc_gr->gd_side);
		write_point(stc_gr->grid, gd_crd.y, gd_crd.x, *lst_coord);
		pos = (*lst_coord)->pos + 1;
	}
	return (FALSE);
}

t_gr	*resolve(char *file)
{
	t_gr			*struct_grid;
	t_coord			**list_coordinate_to_print;
	size_t			size;
	t_pc_cnt		*piece_count;

	list_coordinate_to_print = find_lst_coord(file);
	(*list_coordinate_to_print)->pos = 0;
	if (!(piece_count = malloc(sizeof(piece_count))))
		exit_with_msg(ERROR_MALLOC_FAIL);
	piece_count->total = calculate_count_pieces(file);
	piece_count->current = piece_count->total;
	piece_count->carac = 'A';
	size = find_min_size_square(piece_count->total);
	struct_grid = create_grid(size);
	while (!is_valid(struct_grid, list_coordinate_to_print, piece_count, 0))
	{
		size++;
		struct_grid = create_grid(size);
	}
	return (struct_grid);
}
