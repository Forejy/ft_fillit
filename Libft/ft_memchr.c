/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:43 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/08 18:39:13 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	register const unsigned char	*str;
	register unsigned char			d;

	if (n)
	{
		str = (const unsigned char *)s;
		d = (unsigned char)c;
		while (n--)
		{
			if (*str == d)
				return ((void *)(str));
			str++;
		}
	}
	return ((void *)0);
}
