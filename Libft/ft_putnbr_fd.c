/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:48:38 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/07 16:04:57 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)-n;
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
	if (nbr <= 9)
		ft_putchar_fd((nbr % 10) + '0', fd);
}
