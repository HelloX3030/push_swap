/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:54:46 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/19 15:03:20 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	last = ft_lstlast(*stack);
	last->next = tmp;
	tmp->next = NULL;
}

void	ft_rotate_a(t_push_swap *ps)
{
	rotate(&ps->a);
	if (PRINT_COMMANDS)
		write(1, "ra\n", 3);
}

void	ft_rotate_b(t_push_swap *ps)
{
	rotate(&ps->b);
	if (PRINT_COMMANDS)
		write(1, "rb\n", 3);
}

void	ft_rotate_rr(t_push_swap *ps)
{
	rotate(&ps->a);
	rotate(&ps->b);
	if (PRINT_COMMANDS)
		write(1, "rr\n", 3);
}
