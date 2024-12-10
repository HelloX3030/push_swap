/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:20:18 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 15:59:31 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack *src, t_stack *dst)
{
	int	value;

	if (src->size <= 0 || dst->size <= 0)
		return ;
	value = ft_remove_stack_value(src);
	ft_add_stack_value(dst, value);
}

void	ft_push_a(t_push_swap *ps)
{
	push(&ps->stack_b, &ps->stack_a);
	write(1, "pa\n", 3);
}

void	ft_push_b(t_push_swap *ps)
{
	push(&ps->stack_a, &ps->stack_b);
	write(1, "pb\n", 3);
}
