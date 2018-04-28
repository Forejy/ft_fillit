/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:37 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/07 17:12:51 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *next;

	current = *alst;
	next = (*alst)->next;
	while (current)
	{
		del(current->content, current->content_size);
		free(current);
		current = next;
		if (next && next->next)
			next = next->next;
		else
			next = ((void *)0);
	}
	*alst = ((void *)0);
}
