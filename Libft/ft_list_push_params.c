/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:33 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 17:08:00 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_list_	*ft_list_push_params(int ac, char **av)
{
	t_list_ **begin_list;

	begin_list = (void *)0;
	if (!(begin_list = (t_list_ **)malloc(sizeof(t_list_ *))))
		return ((void *)0);
	while (ac)
	{
		ft_list_push_back(begin_list, av[ac - 1]);
		ac--;
	}
	return (*begin_list);
}
