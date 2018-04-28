/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:23:23 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/20 12:50:54 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIECE_H
# define PIECE_H

# include "libft.h"

typedef struct	s_piece
{
	char	elems[4][4];
}				t_piece;

typedef struct	s_coord
{
	int		x;
	int		y;
	int		pos;

}				t_coord;

t_coord			**find_lst_coord(char *str);
int				calculate_count_pieces(char *str);

# define PIECE_CHAR_COUNT (21)

#endif
