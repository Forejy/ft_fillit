/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:40:33 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/06 12:19:04 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*temp;
	unsigned int	i;

	if (!s || !f || !(str = ft_strnew((size_t)ft_strlen(s))))
		return ((void *)0);
	temp = str;
	i = 0;
	while (s[i])
	{
		*str++ = f(i, s[i]);
		i++;
	}
	return (temp);
}
