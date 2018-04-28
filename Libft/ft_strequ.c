/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:49:26 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/07 10:24:28 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 | !s2)
		return (-1);
	if (ft_strcmp(s1, s2))
		return (0);
	else
		return (1);
}
