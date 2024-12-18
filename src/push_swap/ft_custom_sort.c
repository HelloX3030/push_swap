/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:04:45 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/18 13:08:31 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min(t_list *stack)
{
	int	min;
	int	value;

	min = *(int *)stack->content;
	while (stack)
	{
		value = *(int *)stack->content;
		if (value < min)
			min = value;
		stack = stack->next;
	}
	return (min);
}

static void	push_back(t_push_swap *ps)
{
	while (ps->size_b > 0)
		ft_push_a(ps);
}

void	ft_custom_sort(t_push_swap *ps)
{
	int	min;

	while (ps->size_a > 3)
	{
		min = get_min(ps->a);
		while (*(int *)ps->a->content != min)
		{
			if (*(int *)ps->a->content < min)
				ft_rotate_a(ps);
			else
				ft_reverse_rotate_a(ps);
		}
		ft_push_b(ps);
	}
	ft_bubble_sort(ps);
	push_back(ps);
}
