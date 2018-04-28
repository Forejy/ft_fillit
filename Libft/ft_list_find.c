/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:28 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 16:59:07 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_list_	*ft_list_find(t_list_ *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list && data_ref && cmp)
	{
		while (begin_list)
		{
			if (!(cmp(begin_list->data, data_ref)))
				return (begin_list);
			begin_list = begin_list->next;
		}
	}
	return ((void *)0);
}
