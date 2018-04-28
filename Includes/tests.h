/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:23:30 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/19 16:30:52 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

void	check_elems(char const *s1);
void	tests_invalid_character(char c);
void	tests_numbers_of_caracs(int carac_in_piece_line,
		int count_cur_nline);
void	tests_numbers_of_hashtag(int count_cur_hash);
void	tests_bytes_readed(int bytes_readed);

#endif
