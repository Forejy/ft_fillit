/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:46:24 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 16:47:01 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_list_		*ft_list_at(t_list_ *begin_list, unsigned int nbr)
{
	int			nb;
	t_list_		*result;

	result = (void *)0;
	if (!begin_list || !(result = (t_list_ *)malloc(sizeof(t_list_))))
		return (void *)0;
	nb = nbr;
	result = begin_list;
	while (nb > 0)
	{
		result = result->next;
		nb--;
	}
	return (result);
}
