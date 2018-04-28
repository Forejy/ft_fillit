/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:30 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 17:00:37 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_list_print(t_list_ *begin_list, int nb)
{
	t_list_ *move_in_list;

	move_in_list = (void *)0;
	if (nb > 1)
		ft_putstr("Error : 0 for int, 1 for char *\n");
	if (begin_list)
		move_in_list = begin_list;
	while ((move_in_list))
	{
		if (nb == 0)
		{
			ft_putnbr((*(int *)(move_in_list->data)));
			ft_putchar('\n');
		}
		if (nb == 1)
		{
			ft_putstr((char *)(move_in_list->data));
			ft_putchar('\n');
		}
		move_in_list = move_in_list->next;
	}
}
