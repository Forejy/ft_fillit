/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:23:28 by jmarques          #+#    #+#             */
/*   Updated: 2018/04/26 09:20:34 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESOLVER_H
# define RESOLVER_H

# include "piece.h"
# include "grid.h"
# include "libft.h"

# define TRUE 1
# define FALSE 0

typedef struct	s_pc_cnt
{
	int			total;
	int			current;
	char		carac;
}				t_pc_cnt;

t_gr			*resolve(char *file);
int				is_valid(t_gr *stc_gr, t_coord **lst_coord,
				t_pc_cnt *pc_cnt, int pos);

#endif
