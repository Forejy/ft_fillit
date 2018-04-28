/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 12:41:40 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/20 12:41:41 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/errors.h"

void	check_elems(char const *s1)
{
	int i;
	int count_cur_hash;

	i = 0;
	count_cur_hash = 0;
	while (i <= 20)
	{
		if (s1[i] == '#' && count_cur_hash <= 3)
		{
			count_cur_hash++;
			if (s1[i + 1] != '#' && s1[i + 5] != '#')
				if ((i > 0 && s1[i - 1] != '#'))
					if (i < 5 || (i > 5 && s1[i - 5] != '#'))
						exit_with_msg(ERROR_DISJOINT_ELEMS);
			;
		}
		if (s1[i] == '#' && count_cur_hash == 2)
			if (s1[i + 1] != '#' && s1[i + 4] != '#' && s1[i + 5] != '#')
				exit_with_msg(ERROR_DISJOINT_ELEMS);
		;
		i++;
	}
}

void	tests_invalid_character(char c)
{
	if (!(c == '.' || c == '#' || c == '\n'))
		exit_with_msg(ERROR_INVALID_CHARACTER);
}

void	tests_numbers_of_caracs(int carac_in_piece_line, int count_cur_nline)
{
	if (carac_in_piece_line % 5 != 0 || count_cur_nline > 4)
		exit_with_msg(ERROR_MALFORMED_PIECE);
}

void	tests_numbers_of_hashtag(int count_cur_hash)
{
	if (count_cur_hash != 4)
		exit_with_msg(ERROR_NOT_4_ELEMS);
}

void	tests_(int bytes_readed)
{
	if (!(bytes_readed == 21 || bytes_readed == 20))
		exit_with_msg(ERROR_MALFORMED_PIECE);
}
