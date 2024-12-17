/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:30:46 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 13:41:34 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_list *stack)
{
	int	tmp;

	if (ft_lstsize(stack) < 2)
		return ;
	tmp = ft_get_stack_value(stack, 0);
	ft_set_stack_value(stack, 0, ft_get_stack_value(stack, 1));
	ft_set_stack_value(stack, 1, tmp);
}

void	ft_swap_a(t_push_swap *ps)
{
	ft_swap(ps->a);
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_push_swap *ps)
{
	ft_swap(ps->b);
	write(1, "sb\n", 3);
}

void	ft_swap_ss(t_push_swap *ps)
{
	ft_swap(ps->a);
	ft_swap(ps->b);
	write(1, "ss\n", 3);
}
