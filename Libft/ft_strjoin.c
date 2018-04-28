/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:49:33 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/08 18:33:46 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *begin;

	if (!s1 || !s2 || !(str =
				ft_strnew(((size_t)(ft_strlen(s1) + ft_strlen(s2) + 1)))))
		return (void *)0;
	begin = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (begin);
}
