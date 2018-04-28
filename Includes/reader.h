/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:23:26 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/19 16:29:46 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H

# define CHUNK_READ_SIZE 1024
# include "grid.h"
# include "../Includes/libft.h"

char	*read_file(int entry);
void	read_grid(t_gr *grid);

#endif
