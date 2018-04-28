/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:35:07 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/26 12:56:28 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITER_H
# define WRITER_H
# include "piece.h"
# include "grid.h"

int			is_ok_to_write(t_gr *stc_gr, int y, int x,
							t_coord *piece_array);
void		write_let(char **grid, t_coord gd_crd,
								char c, t_coord *piece_array);
char		find_letter(t_pc_cnt *pc_cnt);
void		write_point(char **grid, int y, int x, t_coord *piece_array);
t_coord		mod_gd_crd(t_coord gd_crd, int pos, int gd_side);
t_pc_cnt	*modifies_pc_cnt(t_pc_cnt *pc_cnt);

#endif
