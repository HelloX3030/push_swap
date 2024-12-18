/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:30:46 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/18 14:39:49 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_list *stack)
{
	t_list		*node_1;
	t_list		*node_2;
	t_content	*tmp;

	if (ft_lstsize(stack) < 2)
		return ;
	node_1 = stack;
	node_2 = stack->next;
	tmp = node_1->content;
	node_1->content = node_2->content;
	node_2->content = tmp;
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
