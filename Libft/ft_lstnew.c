/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:47:40 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/09 17:58:21 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;
	void	*content_;

	elem = (void *)0;
	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return ((void *)0);
	if (!(content_ = (void *)malloc(content_size)))
		return ((void *)0);
	if (!content)
	{
		elem->content = (void *)0;
		elem->content_size = 0;
		elem->next = ((void *)0);
		return (elem);
	}
	else
	{
		ft_memcpy(content_, content, content_size);
		elem->content = content_;
	}
	elem->content_size = content_size;
	elem->next = ((void *)0);
	return (elem);
}
