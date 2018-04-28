/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numvalue_in_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:25:14 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 16:25:52 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numvalue_in_base(char c, const char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}
