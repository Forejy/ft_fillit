/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:48:37 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 11:39:47 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

unsigned int	len_base(const char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

static int		base_is_valid(const char *base, int len)
{
	int i;
	int j;

	i = 0;
	if (len <= 1)
		return (0);
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	while (*base)
		if (*base == '+' || *base++ == '-')
			return (0);
	return (1);
}

void			ft_putnbr_base(int nbr, const char *base)
{
	unsigned int nb;
	unsigned int len;

	nb = (unsigned int)nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = (unsigned int)-nbr;
	}
	len = len_base(base);
	if (base_is_valid(base, len))
	{
		if (nb >= len)
		{
			ft_putnbr_base((nb / len), base);
			ft_putchar(base[nb % len]);
		}
		if (nb < len)
		{
			ft_putchar(base[nb]);
		}
	}
}
