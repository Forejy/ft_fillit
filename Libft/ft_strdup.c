/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 13:09:50 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 12:14:00 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen_strdup(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strdup(const char *src)
{
	int		len_src;
	char	*dest;
	char	*temp;

	len_src = ft_strlen_strdup(src);
	if (!(dest = (char *)malloc(sizeof(char) * (len_src + 1))))
		return ((void *)0);
	temp = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
