/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:37:42 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/08 18:33:09 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	len_to_find;

	len_to_find = ft_strlen(to_find);
	if (!*to_find)
		return ((char *)str);
	while (n && *str)
	{
		if (*str == *to_find)
			if (n >= len_to_find &&
					!(ft_strncmp(str, to_find, (unsigned int)len_to_find)))
				return ((char *)str);
		str++;
		n--;
	}
	return ((void *)0);
}
