/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 17:12:01 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/26 09:08:40 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/reader.h"
#include "../Includes/errors.h"
#include "../Includes/tests.h"
#include <unistd.h>

char	*my_realloc(char *buffer, size_t buffer_offset)
{
	char	*save;

	if (!(save = (char *)malloc(sizeof(char) * buffer_offset)))
		exit_with_msg(ERROR_MALLOC_FAIL);
	save = ft_strcpy(save, buffer);
	free(buffer);
	return (save);
}

char	*read_file(int fd)
{
	size_t	new_len;
	size_t	buffer_offset;
	char	*buffer;

	if (!(buffer = malloc(sizeof(char) * CHUNK_READ_SIZE)))
		exit_with_msg(ERROR_MALLOC_FAIL);
	buffer_offset = 0;
	new_len = CHUNK_READ_SIZE;
	while ((read(fd, buffer + buffer_offset,
								CHUNK_READ_SIZE)) > 0)
	{
		buffer_offset += CHUNK_READ_SIZE;
		new_len += CHUNK_READ_SIZE;
		buffer = my_realloc(buffer, new_len);
	}
	buffer[buffer_offset] = '\0';
	return (buffer);
}

void	read_grid(t_gr *stuct_gr)
{
	int		y;
	int		x;
	char	**grid;
	int		size;

	y = 0;
	grid = stuct_gr->grid;
	size = (int)stuct_gr->gd_side;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			ft_putchar(grid[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
