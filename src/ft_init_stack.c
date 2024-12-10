/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:25:05 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 15:42:30 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stack(t_stack *stack, int max_size)
{
	stack->values = malloc(sizeof(int) * max_size);
	if (!stack->values)
		return (0);
	stack->max_size = max_size;
	stack->values_start = 0;
	stack->size = 0;
	stack->i = 0;
	return (1);
}
