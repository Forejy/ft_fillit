/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:35 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 17:08:47 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_list_reverse(t_list_ **begin_list)
{
	t_list_ *ptr0;
	t_list_ *ptr1;
	t_list_ *ptr2;

	ptr0 = (void *)0;
	ptr1 = (void *)0;
	ptr2 = (void *)0;
	if (begin_list && *begin_list)
	{
		ptr1 = *begin_list;
		ptr2 = (*begin_list)->next;
		while (ptr2)
		{
			ptr1->next = ptr0;
			ptr0 = ptr1;
			ptr1 = ptr2;
			ptr2 = ptr2->next;
		}
		ptr1->next = ptr0;
		*begin_list = ptr1;
	}
}
