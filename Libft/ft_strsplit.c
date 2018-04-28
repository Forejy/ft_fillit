/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:37:25 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 12:16:31 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	cnt_w(char const *str, char c)
{
	int		i;
	int		count;
	int		beginok;

	i = 0;
	count = 0;
	beginok = 0;
	while (str[i])
	{
		if ((str[i] != c && i == 0) || (str[i] != c && str[i - 1] == c))
		{
			beginok = 1;
		}
		if (((str[i + 1] == c || str[i + 1] == '\0') && beginok))
		{
			count++;
			beginok = 0;
		}
		i++;
	}
	return (count);
}

static int	strlen_s(char const *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static int	strsplit_cpy(char *now_str, char const *str, char c)
{
	int i;

	i = 0;
	while (*str != '\0' && *str != c)
	{
		*now_str++ = *str++;
		i++;
	}
	*now_str = '\0';
	return (i);
}

char		**ft_strsplit(char const *str, char c)
{
	char		**s;
	char		*s1;
	char		**begin;
	int			i;
	int			j;

	if (!str || !(s = (char **)malloc(sizeof(char *) * (cnt_w(str, c) + 1))))
		return ((void *)0);
	begin = s;
	i = 0;
	while (str[i])
	{
		if ((str[i] != c && i == 0) || (str[i] != c && str[i - 1] == c))
		{
			j = (strlen_s(&str[i], c));
			if (!(s1 = (char *)malloc(sizeof(char) * (j + 1))))
				return ((void *)0);
			*s++ = s1;
			i += strsplit_cpy(s1, &str[i], c);
		}
		str[i] != '\0' ? i++ : i;
	}
	*s = (void *)0;
	return (begin);
}
