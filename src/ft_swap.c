/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:07:35 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 15:56:54 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	tmp;
	int	first_i;
	int	second_i;

	if (stack->size <= 1)
		return ;
	first_i = ft_get_stack_index(stack, 0);
	second_i = ft_get_stack_index(stack, 1);
	tmp = stack->values[first_i];
	stack->values[first_i] = stack->values[second_i];
	stack->values[second_i] = tmp;
}

void	ft_swap_a(t_push_swap *ps)
{
	swap(&ps->stack_a);
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_push_swap *ps)
{
	swap(&ps->stack_b);
	write(1, "sb\n", 3);
}

void	ft_swap_ss(t_push_swap *ps)
{
	swap(&ps->stack_a);
	swap(&ps->stack_b);
	write(1, "ss\n", 3);
}
