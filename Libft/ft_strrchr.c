/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 13:44:52 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/08 18:32:03 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		len;

	ch = c;
	len = (ft_strlen(s) + 1);
	while (*s)
		s++;
	while (len)
	{
		if (*s == ch)
			return ((char *)s);
		s--;
		len--;
	}
	return ((void *)0);
}
