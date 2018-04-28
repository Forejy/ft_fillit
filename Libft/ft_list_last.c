/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:28 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 16:59:30 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_list_	*ft_list_last(t_list_ *begin_list)
{
	if (begin_list)
	{
		while (begin_list->next)
			begin_list = begin_list->next;
		return (begin_list);
	}
	return ((void *)0);
}
