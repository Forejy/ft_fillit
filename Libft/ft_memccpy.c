/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:42 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/08 19:18:58 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	register const unsigned char	*s1;
	register unsigned char			*s2;

	if (n)
	{
		s2 = (unsigned char *)dest;
		s1 = (const unsigned char *)src;
		while (n--)
		{
			if ((*s2++ = *s1++) == (unsigned char)c)
				return (s2);
		}
	}
	return (0);
}
