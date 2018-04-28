/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:40:41 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 19:21:43 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	char *temp;

	temp = dest;
	while (*dest)
		dest++;
	while (nb-- > 0 && (*dest++ = *src++))
		if (!nb)
			*dest = '\0';
	return (temp);
}
