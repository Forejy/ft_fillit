/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:40:52 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/08 18:29:03 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n-- && *s1 == *s2 && *s1)
	{
		if (n)
		{
			s1++;
			s2++;
		}
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
