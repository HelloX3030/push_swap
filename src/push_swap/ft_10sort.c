/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_10sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:54:54 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/08 15:42:41 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_10sort(t_push_swap *ps)
{
	t_content	*content;

	while (ps->size_a > 3)
	{
		content = (t_content *)ps->a->content;
		if (content->index != 0)
			ft_push_b(ps);
		else
			ft_rotate_a(ps);
	}
	ft_3sort(ps);
	ft_sort_back(ps);
	ft_move_to_start(ps);
}
