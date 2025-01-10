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

static void push_to_b(t_push_swap *ps, int ignore_value)
{
	t_content *content;

	while (ps->size_a > 3)
	{
		content = (t_content *)ps->a->content;
		if (content->index == ignore_value)
			ft_rotate_a(ps);
		else
			ft_push_b(ps);
	}
}

static int get_closest_index(t_list *stack, int target_index, int max_i)
{
	t_content *content;
	int i = 0;
	int closest_index = max_i;
	int current_i = -1;

	// ft_printf("target_index: %i\n", target_index);
	// ft_printf("max_i: %i\n", max_i);

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

void ft_10sort(t_push_swap *ps)
{
	int max_i = ps->size_a - 1;
	t_content *content;
	int max_node_b_index;
	int colsest_a_index;

	push_to_b(ps, max_i);
	ft_3sort(ps);
	while (ps->size_b > 0)
	{
		max_node_b_index = ft_get_max_stack_index(ps->b);
		content = ft_get_content(ps->b, max_node_b_index);
		colsest_a_index = get_closest_index(ps->a, content->index, max_i);
		// ft_print_push_swap(ps);
		// ft_printf("max_node_b_index: %i, colsest_a_index: %i, content->index: %i\n", max_node_b_index, colsest_a_index, content->index);
		ft_go_to_indexes(ps, colsest_a_index, max_node_b_index);
		ft_push_a(ps);
	}
	ft_move_to_start(ps);
	// ft_print_push_swap(ps);
}
