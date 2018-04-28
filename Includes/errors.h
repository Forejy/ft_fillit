/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:22:17 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/19 16:29:31 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# include "../Includes/libft.h"

# ifdef DEV
#  define ERROR_CHARSET_INVALID "charset invalid"
#  define ERROR_OPEN_FAILED "Could not open file"
#  define ERROR_EMPTY_FILE "File is empty"
#  define ERROR_NOT_4_ELEMS "Piece doesn't have exactly 4 elems"
#  define ERROR_MALFORMED_PIECE "Piece is malformed"
#  define ERROR_DISJOINT_ELEMS "Piece has disjoint elements"
#  define ERROR_INVALID_CHARACTER "Piece has invalid characters"
#  define ERROR_MALLOC_FAIL "This will never happen but we never know"
# else
#  define ERROR_CHARSET_INVALID "error"
#  define ERROR_OPEN_FAILED "error"
#  define ERROR_EMPTY_FILE "error"
#  define ERROR_NOT_4_ELEMS "error"
#  define ERROR_MALFORMED_PIECE "error"
#  define ERROR_DISJOINT_ELEMS "error"
#  define ERROR_INVALID_CHARACTER "error"
#  define ERROR_MALLOC_FAIL "error"
# endif

void	exit_with_msg(char const *message);
void	check_file(char const *str);

#endif
