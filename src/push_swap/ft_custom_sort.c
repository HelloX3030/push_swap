/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:04:45 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/18 13:22:05 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min_index(t_list *stack)
{
	int	min;
	int	min_index;
	int	index;

	min = *(int *)stack->content;
	min_index = 0;
	index = 0;
	while (stack)
	{
		if (*(int *)stack->content < min)
		{
			min = *(int *)stack->content;
			min_index = index;
		}
		stack = stack->next;
		index++;
	}
	return (min_index);
}

static void	go_to_min(t_push_swap *ps)
{
	int	min_index;

	min_index = get_min_index(ps->a);
	if (min_index < ps->size_a / 2)
	{
		while (min_index > 0)
		{
			ft_rotate_a(ps);
			min_index--;
		}
	}
	else
	{
		while (min_index < ps->size_a)
		{
			ft_reverse_rotate_a(ps);
			min_index++;
		}
	}
}

static void	push_back(t_push_swap *ps)
{
	while (ps->size_b > 0)
		ft_push_a(ps);
}

void	ft_custom_sort(t_push_swap *ps)
{
	while (ps->size_a > 3)
	{
		go_to_min(ps);
		ft_push_b(ps);
	}
	ft_bubble_sort(ps);
	push_back(ps);
}
