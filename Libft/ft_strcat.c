/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:49:18 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 11:40:20 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_strcpy_strcat(char *dest, const char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

char		*ft_strcat(char *dest, const char *src)
{
	char *temp;

	temp = dest;
	while (*dest)
		dest++;
	ft_strcpy_strcat(dest, src);
	return (temp);
}
