/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:49:24 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 19:09:28 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char *temp;

	temp = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
