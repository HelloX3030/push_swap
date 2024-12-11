/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:59:32 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/11 14:36:14 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*prev;

	if (!*stack || !(*stack)->next)
		return ;
	last = ft_lstlast(*stack);
	prev = ft_get_prev(*stack, last);
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	ft_reverse_rotate_a(t_push_swap *ps)
{
	ft_reverse_rotate(&ps->a);
	write(1, "rra\n", 4);
}

void	ft_reverse_rotate_b(t_push_swap *ps)
{
	ft_reverse_rotate(&ps->b);
	write(1, "rrb\n", 4);
}

void	ft_reverse_rotate_rr(t_push_swap *ps)
{
	ft_reverse_rotate(&ps->a);
	ft_reverse_rotate(&ps->b);
	write(1, "rrr\n", 4);
}
