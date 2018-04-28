/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:41 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/06 12:16:16 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void *memalloc;

	if (!(memalloc = (void *)malloc(size)))
		return ((void *)0);
	ft_memset(memalloc, 0, size);
	return (memalloc);
}
