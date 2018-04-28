/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:37:16 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/06 18:48:46 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char *temp;

	if (!*to_find)
		return ((char *)str);
	temp = (char *)to_find;
	while (*str)
	{
		to_find = temp;
		if (*str == *to_find)
			if (!(ft_strncmp(str, to_find, (unsigned int)(ft_strlen(to_find)))))
				return ((char *)str);
		str++;
	}
	return (0);
}
