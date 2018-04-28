/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:36 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 12:14:13 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

static void	ft_list_swap(t_list_ *comparing, t_list_ *compared)
{
	void	*temp;

	if (comparing && compared)
	{
		temp = comparing->data;
		comparing->data = compared->data;
		compared->data = temp;
	}
}

void		ft_list_sort(t_list_ **begin_list, int (*cmp)())
{
	t_list_	*comparing;
	t_list_	*compared;

	if (begin_list && *begin_list && cmp)
	{
		if (ft_list_size(*begin_list) >= 2)
		{
			comparing = *begin_list;
			while ((comparing->next))
			{
				compared = comparing->next;
				while (compared)
				{
					if ((cmp(comparing->data, compared->data) > 0))
					{
						ft_list_swap(comparing, compared);
					}
					compared = compared->next;
				}
				comparing = comparing->next;
			}
		}
	}
}
