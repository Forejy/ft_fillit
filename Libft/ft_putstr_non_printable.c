/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:48:41 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 12:03:12 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

static int	carac_is_printable(char c)
{
	if (c >= 32 || c == 127)
		return (1);
	return (0);
}

void		ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!carac_is_printable(*str))
		{
			ft_putchar('\\');
			if (*str <= 15)
				ft_putchar('0');
			ft_putnbr_base((int)*str, "0123456789ABCDEF");
		}
		else
			ft_putchar(*str);
		str++;
	}
}
