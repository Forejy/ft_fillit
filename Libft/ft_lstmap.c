/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:39 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 14:22:32 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list **new_list;
	t_list *current_new;

	if (!lst || !f || !(new_list = (t_list **)malloc(sizeof(t_list))))
		return ((void *)0);
	*new_list = ((void *)0);
	*new_list = f(lst);
	lst = lst->next;
	current_new = *new_list;
	while (lst)
	{
		if (!(current_new->next = f(lst)))
			return ((void *)0);
		current_new = current_new->next;
		lst = lst->next;
	}
	return (*new_list);
}
