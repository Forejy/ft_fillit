/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:40:30 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/06 12:17:33 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	char *temp;

	if (!s || !f || !(str = ft_strnew((size_t)ft_strlen(s))))
		return ((void *)0);
	temp = str;
	while (*s)
		*str++ = f(*s++);
	return (temp);
}
