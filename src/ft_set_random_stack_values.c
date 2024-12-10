/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_random_values.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseeger <lseeger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:23:10 by lseeger           #+#    #+#             */
/*   Updated: 2024/12/10 16:08:58 by lseeger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_random_stack_values(t_stack *stack)
{
	int	i;

	stack->values_start = 0;
	stack->i = 0;
	i = 0;
	while (i < stack->size)
	{
		stack->values[i] = i;
		i++;
	}
	while (i < stack->max_size)
	{
		stack->values[i] = -1;
		i++;
	}
}
