/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:36:55 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 11:43:15 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

static int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static size_t	strlen_strtrim(const char *str)
{
	const char	*end;

	end = str;
	while (*end)
		end++;
	end--;
	while (ft_iswhitespace(*end) && end != str)
		end--;
	while (str != end && ft_iswhitespace(*str))
		str++;
	return (end + 1 - str);
}

static int		test_str(char const *str)
{
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '\0')
		return (0);
	else
		return (1);
}

char			*ft_strtrim(char const *s)
{
	char		*str;
	char		*temp;
	char const	*end;

	if (!s || !(str = ft_strnew(strlen_strtrim(s))))
		return ((void *)0);
	if (test_str(s) == 0)
	{
		*str = '\0';
		return (str);
	}
	temp = str;
	end = &s[ft_strlen(s) - 1];
	while (ft_iswhitespace(*end) && end != s)
		end--;
	while (ft_iswhitespace(*s))
		s++;
	while (s && s != (end + 1))
	{
		*str = *s;
		str++;
		s++;
	}
	*str = '\0';
	return (temp);
}
