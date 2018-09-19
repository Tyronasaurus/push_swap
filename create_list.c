/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:50:19 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/07/10 12:50:21 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_cntrl		*ft_newlist (void)
{
	t_cntrl		nlist;

	nlist = (t_cntrl *)malloc(sizeof)(*nlist);
	if (!nlist)
	{
		ft_putstr_fd("Error\n", 2);
		exit (0);
	}
	nlist->size_a = 0;
	nlist->size_b = 0;
	nlist->first_a = NULL;
	nlist->first_b = NULL;
	nlist->last_a = NULL;
	nlist->last_b = NULL;
	return (nlist);
}