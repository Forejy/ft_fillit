/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:25 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 19:17:03 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_list_clear(t_list_ **begin_list)
{
	t_list_ *current;

	current = (void *)0;
	if (begin_list && *begin_list && (current = (t_list_ *)
			malloc(sizeof(t_list_))))
	{
		while (*begin_list)
		{
			current = *begin_list;
			if ((*begin_list)->next)
				*begin_list = (*begin_list)->next;
			else
				*begin_list = (void *)0;
			free(current);
			current = (void *)0;
		}
		begin_list = (void *)0;
	}
}
