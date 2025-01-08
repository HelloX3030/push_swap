/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:43:31 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/08 15:06:31 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_custom_sort(t_push_swap *ps)
{
	int			start_i;
	int			i;
	float		average_diff;
	t_content	*content_1;

	start_i = ft_get_min_diff_index(ps->a, ps->size_a);
	i = 0;
	average_diff = ft_get_total_diff(ps->a, i, ps->size_a) / (float)ps->size_a;
	while (average_diff > 0)
	{
		content_1 = (t_content *)ps->a->content;
		if (content_1->index > ft_get_relative_index(i, start_i, ps->size_a))
			ft_swap_a(ps);
		ft_rotate_a(ps);
		i = ft_get_next_index(i, ps->size_a);
		average_diff = ft_get_total_diff(ps->a, i, ps->size_a)
			/ (float)ps->size_a;
	}
	ft_sort_in_b(ps);
}
