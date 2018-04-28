/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 13:33:34 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 12:35:08 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int					i;
	unsigned long		a;
	int					sign;

	i = 0;
	a = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
	|| str[i] == '\t' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		a *= 10;
		a += (str[i] - '0');
		if (a > 9223372036854775807 && sign == 1)
			return (-1);
		if (a > 9223372036854775807 && sign == -1)
			return (0);
		i++;
	}
	return (int)(a * sign);
}
