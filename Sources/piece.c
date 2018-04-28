/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:52:48 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/19 17:11:56 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/piece.h"
#include "../Includes/errors.h"
#include "../Includes/resolver.h"

int			calculate_count_pieces(char *str)
{
	int				i;
	int				count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

t_coord		find_coordinates_origin(int pos)
{
	t_coord	coordinates;

	coordinates.y = pos / 5;
	coordinates.x = pos % 5;
	return (coordinates);
}

t_coord		find_coordinates_from_origin(int pos,
		t_coord hash_origin_coordinates)
{
	t_coord	coordinates;

	coordinates.y = (pos / 5) - hash_origin_coordinates.y;
	coordinates.x = (pos % 5) - hash_origin_coordinates.x;
	return (coordinates);
}

t_coord		*find_coordinates_piece(char *str)
{
	t_coord		*piece_coordinates;
	t_coord		hash_origin_coordinates;
	t_coord		*temp;
	int			i;

	if (!(piece_coordinates = (t_coord *)malloc(sizeof(t_coord)
								* 3)))
		exit_with_msg(ERROR_MALLOC_FAIL);
	temp = piece_coordinates;
	hash_origin_coordinates.x = -1;
	i = 0;
	while (!(str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0')))
	{
		if (str[i] == '#' && hash_origin_coordinates.x != -1)
		{
			*piece_coordinates = find_coordinates_from_origin(i,
					hash_origin_coordinates);
			piece_coordinates++;
		}
		if (str[i] == '#' && hash_origin_coordinates.x == -1)
			hash_origin_coordinates = find_coordinates_origin(i);
		i++;
	}
	return (temp);
}

t_coord		**find_lst_coord(char *str)
{
	int				i;
	int				count_pieces;
	t_coord			**coordinates_list;
	t_coord			**begin;

	i = 0;
	count_pieces = calculate_count_pieces(str);
	if (!(coordinates_list = (t_coord **)malloc(sizeof(t_coord *)
					* (count_pieces + 1))))
		exit_with_msg(ERROR_MALLOC_FAIL);
	begin = coordinates_list;
	while (str[i])
	{
		*coordinates_list = find_coordinates_piece(&str[i]);
		coordinates_list++;
		i += PIECE_CHAR_COUNT;
	}
	*coordinates_list = NULL;
	return (begin);
}
