/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:26:00 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 11:37:34 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

static int	len_atoi_base(const char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

static int	baseatoi_is_valid(const char *base, int len)
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

static int	str_is_valid(const char *str, const char *base)
{
	while (!ft_charac_is_whitespace(*str))
	{
		if (!ft_charac_is_base(*str, base))
			return (0);
		str++;
	}
	return (1);
}

static int	atoi_norm(const char *str, const char *base, int len)
{
	int nb;
	int pow;

	nb = 0;
	pow = 1;
	while (ft_charac_is_base(*str, base))
	{
		nb = nb + (ft_numvalue_in_base(*str, base) * pow);
		pow = pow * len;
		str--;
	}
	return (nb);
}

int			ft_atoi_base(const char *str, const char *base)
{
	int			nb;
	int			sign;
	static int	len;

	sign = 1;
	nb = 0;
	len = len_atoi_base(base);
	while (!ft_charac_is_whitespace(*str))
	{
		str++;
	}
	if (ft_charac_is_sign(*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!baseatoi_is_valid(base, len) || !(str_is_valid(str, base)))
		return (0);
	while (ft_charac_is_base(*str, base))
		str++;
	str--;
	nb = atoi_norm(str, base, len);
	return (sign * nb);
}
