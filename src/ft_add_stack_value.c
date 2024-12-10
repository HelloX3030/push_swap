/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_stack_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:33:01 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 16:06:38 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_stack_value(t_stack *stack, int value)
{
	if (stack->size >= stack->max_size)
		return ;
	stack->size++;
	(void)value;
}
