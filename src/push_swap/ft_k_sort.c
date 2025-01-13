/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_k_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:32:26 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/13 15:32:38 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_k_sort(t_push_swap *ps, int chunk_size)
{
	int			border;
	t_content	*content;

	border = 0;
	while (ps->size_a > 3)
	{
		content = (t_content *)ps->a->content;
		if (content->index <= border)
		{
			ft_push_b(ps);
			ft_rotate_b(ps);
			border++;
		}
		else if (content->index <= border + chunk_size)
		{
			ft_push_b(ps);
			border++;
		}
		else
			ft_rotate_a(ps);
	}
	ft_3sort(ps);
	ft_improved_sort_back(ps);
}
