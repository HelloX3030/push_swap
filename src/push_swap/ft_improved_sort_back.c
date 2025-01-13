/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_improved_sort_back.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:35:14 by lseeger           #+#    #+#             */
/*   Updated: 2025/01/13 15:35:24 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_closest_index(t_list *stack, int target_index, int max_i)
{
	t_content	*content;
	int			i;
	int			closest_index;
	int			current_i;

	i = 0;
	closest_index = max_i;
	current_i = -1;
	while (stack)
	{
		content = (t_content *)stack->content;
		if (content->index > target_index && content->index <= closest_index)
		{
			closest_index = content->index;
			current_i = i;
		}
		i++;
		stack = stack->next;
	}
	return (current_i);
}

void	ft_improved_sort_back(t_push_swap *ps)
{
	t_content	*content;
	int			max_node_b_index;
	int			colsest_a_index;
	int			max_i;

	max_i = ps->size_a + ps->size_b - 1;
	while (ps->size_b > 0)
	{
		max_node_b_index = ft_get_max_stack_index(ps->b);
		content = ft_get_content(ps->b, max_node_b_index);
		colsest_a_index = get_closest_index(ps->a, content->index, max_i);
		ft_go_to_indexes(ps, colsest_a_index, max_node_b_index);
		ft_push_a(ps);
	}
	ft_move_to_start(ps);
}
