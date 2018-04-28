/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:32 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 17:00:54 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_list_push_back(t_list_ **begin_list, void *data)
{
	t_list_		*elem;
	t_list_		*current;

	elem = (void *)0;
	current = *begin_list;
	if (*begin_list)
	{
		if ((elem = ft_create_elem(data)))
		{
			while (current->next)
				current = current->next;
			(current->next) = elem;
		}
	}
	else if (begin_list)
		if ((elem = ft_create_elem(data)))
			*begin_list = elem;
}
