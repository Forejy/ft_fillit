/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charac_is_whitespace.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <jmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:02:51 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/05 16:12:13 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_charac_is_whitespace(char c)
{
	return ((c != ' ' && c != '\v' && c != '\t'
			&& c != '\f' && c != '\n' && c != '\r' && c != '\0') ? 1 : 0);
}
