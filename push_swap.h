/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 10:50:29 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/07/10 10:55:23 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PUSH_SWAP_H
# define	PUSH_SWAP_H

# include	"libft/libft.h"

typedef struct		s_list
{
	int				val;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

typedef struct		s_ctrl
{
	t_list			*first_a;
	t_list			*last_a;
	t_list			*first_b;
	t_list			*last_b;
	int				size_a;
	int				size_b;
}					t_ctrl;

#endif
