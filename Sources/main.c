/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:46:36 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/19 16:47:39 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/fcntl.h>
#include "../Includes/main.h"

int	main(int ac, char **av)
{
	int				fd;
	char			*file;
	t_gr			*stc_gr;

	if (ac >= 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			exit_with_msg(ERROR_OPEN_FAILED);
		else
		{
			file = read_file(fd);
			check_file(file);
			stc_gr = resolve(file);
			read_grid(stc_gr);
		}
	}
	return (0);
}
