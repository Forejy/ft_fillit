/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:34:31 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 11:38:12 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_strlen_concat(char *str)
{
	int		i;

	i = 1;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

static int	fullstrlen(int argc, char **argv)
{
	int		temp_len;

	temp_len = 0;
	while (argc > 1)
	{
		temp_len = temp_len + ft_strlen_concat(argv[argc - 1]);
		argc--;
	}
	return (temp_len);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		len_total;
	int		j;
	int		i;
	char	*temp;
	char	*str;

	len_total = fullstrlen(argc, argv);
	str = (char *)malloc(sizeof(char) * len_total);
	temp = str;
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			*str = argv[i][j++];
			str++;
		}
		*str = '\n';
		str++;
	}
	str--;
	*str = '\0';
	return (temp);
}
