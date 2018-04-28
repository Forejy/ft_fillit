/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:35:00 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 16:35:43 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_list_		*ft_create_elem(void *data)
{
	t_list_	*elem;

	elem = (void *)0;
	if (!(elem = (t_list_ *)malloc(sizeof(*elem))))
		return ((void *)0);
	elem->data = data;
	elem->next = ((void *)0);
	return (elem);
}
