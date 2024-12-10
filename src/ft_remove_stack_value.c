/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_stack_value.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:33:46 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 16:29:35 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_remove_stack_value(t_stack *stack)
{
	int	value;

	if (stack->size <= 0)
		return (-1);
	value = stack->values[stack->i];
	stack->size--;
	stack->values_start = (stack->values_start + 1) % stack->max_size;
	return (value);
}
