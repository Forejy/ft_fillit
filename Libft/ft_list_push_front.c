/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:31 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 17:07:33 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_list_push_front(t_list_ **begin_list, void *data)
{
	t_list_ *elem;

	elem = (void *)0;
	if (begin_list && *begin_list)
	{
		if ((elem = ft_create_elem(data)))
		{
			elem->next = *begin_list;
			*begin_list = elem;
		}
	}
	else if (begin_list)
		if ((elem = ft_create_elem(data)))
			*begin_list = elem;
}
