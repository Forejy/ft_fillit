/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 12:58:59 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/04/19 16:45:03 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zconf.h>
#include "../Includes/tests.h"
#include "../Includes/errors.h"

void	exit_with_msg(char const *message)
{
	ft_putstr(message);
	exit(0);
}

void	to_norm_or_not(char const *str, int carac_in_piece_line,
		int count_cur_nline, int count_cur_hash)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		tests_invalid_character(*str);
		if (str[i] == '#')
			count_cur_hash++;
		if (str[i] == '\n' && str[i - 1] != '\n')
		{
			count_cur_nline++;
			tests_numbers_of_caracs(carac_in_piece_line, count_cur_nline);
		}
		i++;
		carac_in_piece_line++;
		if ((str[i] == '\n' || str[i] == '\0') && str[i - 1] == '\n')
		{
			tests_numbers_of_hashtag(count_cur_hash);
			count_cur_nline = 0;
			count_cur_hash = 0;
			carac_in_piece_line = 0;
			check_elems(&str[i - 20]);
		}
	}
}

void	check_file(char const *str)
{
	int carac_in_piece_line;
	int count_cur_nline;
	int count_cur_hash;

	carac_in_piece_line = 1;
	count_cur_nline = 0;
	count_cur_hash = 0;
	if (*str == '\0')
		exit_with_msg(ERROR_EMPTY_FILE);
	to_norm_or_not(str, carac_in_piece_line, count_cur_nline, count_cur_hash);
}
