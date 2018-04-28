/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:34 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 17:10:01 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_list_size(t_list_ *begin_list)
{
	int i;

	i = 0;
	if (begin_list)
	{
		while (begin_list)
		{
			begin_list = begin_list->next;
			i++;
		}
	}
	return (i);
}
