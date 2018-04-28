/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:37:06 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/08 18:32:29 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	char			*temp;
	unsigned int	i;

	if (!s || !(strsub = ft_strnew(len)))
		return (void *)0;
	temp = strsub;
	i = start;
	while (len)
	{
		*strsub++ = s[i++];
		len--;
	}
	return (temp);
}
